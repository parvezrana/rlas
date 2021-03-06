# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

laswriter <- function(file, LASheader, X, Y, Z, I = integer(0), RN = integer(0), NoR = integer(0), SDF = integer(0), EoF = integer(0), C = integer(0), SA = integer(0), UD = integer(0), PSI = integer(0), T = numeric(0), R = integer(0), G = integer(0), B = integer(0)) {
    invisible(.Call(`_rlas_laswriter`, file, LASheader, X, Y, Z, I, RN, NoR, SDF, EoF, C, SA, UD, PSI, T, R, G, B))
}

lasdatareader <- function(ifiles, ofile, filter, i, r, n, d, e, c, a, u, p, rgb, t, eb) {
    .Call(`_rlas_lasdatareader`, ifiles, ofile, filter, i, r, n, d, e, c, a, u, p, rgb, t, eb)
}

lasdatareader_inpoly <- function(ifiles, x, y, ofile, filter, i, r, n, d, e, c, a, u, p, rgb, t, eb) {
    .Call(`_rlas_lasdatareader_inpoly`, ifiles, x, y, ofile, filter, i, r, n, d, e, c, a, u, p, rgb, t, eb)
}

fast_table <- function(x, size = 5L) {
    .Call(`_rlas_fast_table`, x, size)
}

fast_countequal <- function(x, t) {
    .Call(`_rlas_fast_countequal`, x, t)
}

fast_countbelow <- function(x, t) {
    .Call(`_rlas_fast_countbelow`, x, t)
}

fast_countover <- function(x, t) {
    .Call(`_rlas_fast_countover`, x, t)
}

point_in_polygon <- function(vertx, verty, pointx, pointy) {
    .Call(`_rlas_point_in_polygon`, vertx, verty, pointx, pointy)
}

lasheaderreader <- function(file) {
    .Call(`_rlas_lasheaderreader`, file)
}

lasfilterusage <- function() {
    invisible(.Call(`_rlas_lasfilterusage`))
}

C_reader <- function(ifiles, ofile, select, filter) {
    .Call(`_rlas_C_reader`, ifiles, ofile, select, filter)
}

C_reader_inpoly <- function(ifiles, x, y, ofile, select, filter) {
    .Call(`_rlas_C_reader_inpoly`, ifiles, x, y, ofile, select, filter)
}

C_writer <- function(file, LASheader, data) {
    invisible(.Call(`_rlas_C_writer`, file, LASheader, data))
}

laxwriter <- function(file) {
    invisible(.Call(`_rlas_laxwriter`, file))
}

