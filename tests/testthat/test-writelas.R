context("writelas")

lazfile <- system.file("extdata", "example.laz", package="rlas")
las = read.las(lazfile)
header = read.lasheader(lazfile)
write_path = file.path(tempdir(), "temp.las")

test_that("write.las writes a correct file",{
  write.las(write_path, header, las)
  wlas = read.las(write_path)
  wheader = read.lasheader(write_path)

  expect_equal(las, wlas)
  expect_equal(header$`Point Data Format ID`, wheader$`Point Data Format ID`)
})

test_that("UUID is properly written",{
  new_header = header
  new_header$`Project ID - GUID` = uuid::UUIDgenerate()

  write.las(write_path, new_header, las)
  wheader <- read.lasheader(write_path)

  expect_equal(wheader$`Project ID - GUID`, new_header$`Project ID - GUID`)
})

test_that("write.las does not write time if point format enforced to 0",{
  new_header = header
  new_header$`Point Data Format ID` = 0

  expect_warning(write.las(write_path, new_header, las), "gpstime")

  wlas = read.las(write_path)
  wheader = read.lasheader(write_path)

  expect_true(!"gpstime" %in% names(wlas))
  expect_equal(new_header$`Point Data Format ID`, 0)
})


lazfile <- system.file("extdata", "extra_byte.laz", package="rlas")
las = read.las(lazfile)
header = read.lasheader(lazfile)

check_EB_header <- function(new, origin){
  if(is.list(new))
    mapply(check_EB_header, new, origin)
  else
    new[1] == origin[1]
}

test_that("write.las writes Extra Bytes correctly",{
  write.las(write_path, header, las)
  wlas = read.las(write_path)
  wheader = read.lasheader(write_path)

  eb1 <- wheader$`Variable Length Records`$Extra_Bytes
  eb2 <- header$`Variable Length Records`$Extra_Bytes
  EB_header_check <- check_EB_header(eb1, eb2)
  EB_header_check$description <- NULL
  EB_header_check$reserved <- NULL
  EB_header_check <- unlist(EB_header_check)

  expect_true(all(EB_header_check))

  expect_equal(las, wlas)
})


test_that("write.las skip extra bytes if empty VLR", {
  new_header = header
  new_header$`Variable Length Records` = list()
  write.las(write_path, new_header, las)
  wlas = read.las(write_path)
  wheader = read.lasheader(write_path)

  expect_true(!any(c("Amplitude", "Pulse width") %in% names(wlas)))
  expect_equal(wlas, las[, -c(17:18)])
  expect_equal(length(wheader$`Variable Length Records`), 0)
})

test_that("write.las skiped selectively extra byte if missing VLR",{
  new_header = header
  new_header$`Variable Length Records`$Extra_Bytes$`Extra Bytes Description`$Amplitude = NULL

  write.las(write_path, new_header, las)

  wlas <- read.las(write_path)
  wheader <- read.lasheader(write_path)

  expect_true(!"Amplitude" %in% names(wlas))
  expect_equal(wlas, las[, -c(17)])
})


