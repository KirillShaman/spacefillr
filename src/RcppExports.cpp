// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_generate_sobol_set
List rcpp_generate_sobol_set(uint64_t N, unsigned int dim, unsigned int scramble);
RcppExport SEXP _spacefillr_rcpp_generate_sobol_set(SEXP NSEXP, SEXP dimSEXP, SEXP scrambleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type scramble(scrambleSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_sobol_set(N, dim, scramble));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_sobol_owen_set
List rcpp_generate_sobol_owen_set(uint64_t N, unsigned int dim, unsigned int scramble);
RcppExport SEXP _spacefillr_rcpp_generate_sobol_owen_set(SEXP NSEXP, SEXP dimSEXP, SEXP scrambleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type scramble(scrambleSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_sobol_owen_set(N, dim, scramble));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_sobol_owen_single
double rcpp_generate_sobol_owen_single(uint64_t i, unsigned int dim, unsigned int scramble);
RcppExport SEXP _spacefillr_rcpp_generate_sobol_owen_single(SEXP iSEXP, SEXP dimSEXP, SEXP scrambleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type scramble(scrambleSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_sobol_owen_single(i, dim, scramble));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_halton_faure_set
List rcpp_generate_halton_faure_set(uint64_t N, unsigned int dim);
RcppExport SEXP _spacefillr_rcpp_generate_halton_faure_set(SEXP NSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_halton_faure_set(N, dim));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_halton_random_set
List rcpp_generate_halton_random_set(uint64_t N, unsigned int dim, unsigned int seed);
RcppExport SEXP _spacefillr_rcpp_generate_halton_random_set(SEXP NSEXP, SEXP dimSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_halton_random_set(N, dim, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_halton_faure_single
double rcpp_generate_halton_faure_single(uint64_t i, unsigned int dim);
RcppExport SEXP _spacefillr_rcpp_generate_halton_faure_single(SEXP iSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_halton_faure_single(i, dim));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_halton_random_single
double rcpp_generate_halton_random_single(uint64_t i, unsigned int dim, unsigned int seed);
RcppExport SEXP _spacefillr_rcpp_generate_halton_random_single(SEXP iSEXP, SEXP dimSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_halton_random_single(i, dim, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_pj_set
List rcpp_generate_pj_set(uint64_t N, int seed);
RcppExport SEXP _spacefillr_rcpp_generate_pj_set(SEXP NSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_pj_set(N, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_pmj_set
List rcpp_generate_pmj_set(uint64_t N, int seed);
RcppExport SEXP _spacefillr_rcpp_generate_pmj_set(SEXP NSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_pmj_set(N, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_pmjbn_set
List rcpp_generate_pmjbn_set(uint64_t N, int seed);
RcppExport SEXP _spacefillr_rcpp_generate_pmjbn_set(SEXP NSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_pmjbn_set(N, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_pmj02_set
List rcpp_generate_pmj02_set(uint64_t N, int seed);
RcppExport SEXP _spacefillr_rcpp_generate_pmj02_set(SEXP NSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_pmj02_set(N, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_pmj02bn_set
List rcpp_generate_pmj02bn_set(uint64_t N, int seed);
RcppExport SEXP _spacefillr_rcpp_generate_pmj02bn_set(SEXP NSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint64_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_pmj02bn_set(N, seed));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spacefillr_rcpp_generate_sobol_set", (DL_FUNC) &_spacefillr_rcpp_generate_sobol_set, 3},
    {"_spacefillr_rcpp_generate_sobol_owen_set", (DL_FUNC) &_spacefillr_rcpp_generate_sobol_owen_set, 3},
    {"_spacefillr_rcpp_generate_sobol_owen_single", (DL_FUNC) &_spacefillr_rcpp_generate_sobol_owen_single, 3},
    {"_spacefillr_rcpp_generate_halton_faure_set", (DL_FUNC) &_spacefillr_rcpp_generate_halton_faure_set, 2},
    {"_spacefillr_rcpp_generate_halton_random_set", (DL_FUNC) &_spacefillr_rcpp_generate_halton_random_set, 3},
    {"_spacefillr_rcpp_generate_halton_faure_single", (DL_FUNC) &_spacefillr_rcpp_generate_halton_faure_single, 2},
    {"_spacefillr_rcpp_generate_halton_random_single", (DL_FUNC) &_spacefillr_rcpp_generate_halton_random_single, 3},
    {"_spacefillr_rcpp_generate_pj_set", (DL_FUNC) &_spacefillr_rcpp_generate_pj_set, 2},
    {"_spacefillr_rcpp_generate_pmj_set", (DL_FUNC) &_spacefillr_rcpp_generate_pmj_set, 2},
    {"_spacefillr_rcpp_generate_pmjbn_set", (DL_FUNC) &_spacefillr_rcpp_generate_pmjbn_set, 2},
    {"_spacefillr_rcpp_generate_pmj02_set", (DL_FUNC) &_spacefillr_rcpp_generate_pmj02_set, 2},
    {"_spacefillr_rcpp_generate_pmj02bn_set", (DL_FUNC) &_spacefillr_rcpp_generate_pmj02bn_set, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_spacefillr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
