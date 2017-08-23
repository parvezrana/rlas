// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// lasdatareader
List lasdatareader(CharacterVector file, bool Intensity, bool ReturnNumber, bool NumberOfReturns, bool ScanDirectionFlag, bool EdgeOfFlightline, bool Classification, bool ScanAngle, bool UserData, bool PointSourceID, bool RGB, bool gpst, CharacterVector filter);
RcppExport SEXP _rlas_lasdatareader(SEXP fileSEXP, SEXP IntensitySEXP, SEXP ReturnNumberSEXP, SEXP NumberOfReturnsSEXP, SEXP ScanDirectionFlagSEXP, SEXP EdgeOfFlightlineSEXP, SEXP ClassificationSEXP, SEXP ScanAngleSEXP, SEXP UserDataSEXP, SEXP PointSourceIDSEXP, SEXP RGBSEXP, SEXP gpstSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    Rcpp::traits::input_parameter< bool >::type Intensity(IntensitySEXP);
    Rcpp::traits::input_parameter< bool >::type ReturnNumber(ReturnNumberSEXP);
    Rcpp::traits::input_parameter< bool >::type NumberOfReturns(NumberOfReturnsSEXP);
    Rcpp::traits::input_parameter< bool >::type ScanDirectionFlag(ScanDirectionFlagSEXP);
    Rcpp::traits::input_parameter< bool >::type EdgeOfFlightline(EdgeOfFlightlineSEXP);
    Rcpp::traits::input_parameter< bool >::type Classification(ClassificationSEXP);
    Rcpp::traits::input_parameter< bool >::type ScanAngle(ScanAngleSEXP);
    Rcpp::traits::input_parameter< bool >::type UserData(UserDataSEXP);
    Rcpp::traits::input_parameter< bool >::type PointSourceID(PointSourceIDSEXP);
    Rcpp::traits::input_parameter< bool >::type RGB(RGBSEXP);
    Rcpp::traits::input_parameter< bool >::type gpst(gpstSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(lasdatareader(file, Intensity, ReturnNumber, NumberOfReturns, ScanDirectionFlag, EdgeOfFlightline, Classification, ScanAngle, UserData, PointSourceID, RGB, gpst, filter));
    return rcpp_result_gen;
END_RCPP
}
// lasheaderreader
List lasheaderreader(CharacterVector file);
RcppExport SEXP _rlas_lasheaderreader(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(lasheaderreader(file));
    return rcpp_result_gen;
END_RCPP
}
// lasfilterusage
void lasfilterusage();
RcppExport SEXP _rlas_lasfilterusage() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    lasfilterusage();
    return R_NilValue;
END_RCPP
}
// laswriter
void laswriter(CharacterVector file, List LASheader, NumericVector X, NumericVector Y, NumericVector Z, IntegerVector I, IntegerVector RN, IntegerVector NoR, IntegerVector SDF, IntegerVector EoF, IntegerVector C, IntegerVector SA, IntegerVector UD, IntegerVector PSI, NumericVector T, IntegerVector R, IntegerVector G, IntegerVector B);
RcppExport SEXP _rlas_laswriter(SEXP fileSEXP, SEXP LASheaderSEXP, SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP ISEXP, SEXP RNSEXP, SEXP NoRSEXP, SEXP SDFSEXP, SEXP EoFSEXP, SEXP CSEXP, SEXP SASEXP, SEXP UDSEXP, SEXP PSISEXP, SEXP TSEXP, SEXP RSEXP, SEXP GSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    Rcpp::traits::input_parameter< List >::type LASheader(LASheaderSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type I(ISEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type RN(RNSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type NoR(NoRSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type SDF(SDFSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type EoF(EoFSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type C(CSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type SA(SASEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type UD(UDSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type PSI(PSISEXP);
    Rcpp::traits::input_parameter< NumericVector >::type T(TSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R(RSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type G(GSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type B(BSEXP);
    laswriter(file, LASheader, X, Y, Z, I, RN, NoR, SDF, EoF, C, SA, UD, PSI, T, R, G, B);
    return R_NilValue;
END_RCPP
}
// laxwriter
void laxwriter(CharacterVector file);
RcppExport SEXP _rlas_laxwriter(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    laxwriter(file);
    return R_NilValue;
END_RCPP
}
