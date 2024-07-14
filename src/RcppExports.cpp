// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// S_diff
double S_diff(NumericVector S);
RcppExport SEXP _ChangePointTaylor_S_diff(SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(S_diff(S));
    return rcpp_result_gen;
END_RCPP
}
// cusum
NumericVector cusum(NumericVector x, double X_bar);
RcppExport SEXP _ChangePointTaylor_cusum(SEXP xSEXP, SEXP X_barSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type X_bar(X_barSEXP);
    rcpp_result_gen = Rcpp::wrap(cusum(x, X_bar));
    return rcpp_result_gen;
END_RCPP
}
// min_MSE_ix
int min_MSE_ix(NumericVector x);
RcppExport SEXP _ChangePointTaylor_min_MSE_ix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(min_MSE_ix(x));
    return rcpp_result_gen;
END_RCPP
}
// sample_cpp
NumericVector sample_cpp(NumericVector x, int n);
RcppExport SEXP _ChangePointTaylor_sample_cpp(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_cpp(x, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ChangePointTaylor_S_diff", (DL_FUNC) &_ChangePointTaylor_S_diff, 1},
    {"_ChangePointTaylor_cusum", (DL_FUNC) &_ChangePointTaylor_cusum, 2},
    {"_ChangePointTaylor_min_MSE_ix", (DL_FUNC) &_ChangePointTaylor_min_MSE_ix, 1},
    {"_ChangePointTaylor_sample_cpp", (DL_FUNC) &_ChangePointTaylor_sample_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_ChangePointTaylor(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
