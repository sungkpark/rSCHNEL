// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// run
void run(NumericMatrix nm, int num_scales, int seed, float landmark_threshold, int num_neighbors, int num_trees, int num_checks, float transition_matrix_prune_thresh, int num_walks, int num_walks_per_landmark, bool monte_carlo_sampling, bool out_of_core_computation);
RcppExport SEXP _rschnel_run(SEXP nmSEXP, SEXP num_scalesSEXP, SEXP seedSEXP, SEXP landmark_thresholdSEXP, SEXP num_neighborsSEXP, SEXP num_treesSEXP, SEXP num_checksSEXP, SEXP transition_matrix_prune_threshSEXP, SEXP num_walksSEXP, SEXP num_walks_per_landmarkSEXP, SEXP monte_carlo_samplingSEXP, SEXP out_of_core_computationSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type nm(nmSEXP);
    Rcpp::traits::input_parameter< int >::type num_scales(num_scalesSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< float >::type landmark_threshold(landmark_thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type num_neighbors(num_neighborsSEXP);
    Rcpp::traits::input_parameter< int >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< int >::type num_checks(num_checksSEXP);
    Rcpp::traits::input_parameter< float >::type transition_matrix_prune_thresh(transition_matrix_prune_threshSEXP);
    Rcpp::traits::input_parameter< int >::type num_walks(num_walksSEXP);
    Rcpp::traits::input_parameter< int >::type num_walks_per_landmark(num_walks_per_landmarkSEXP);
    Rcpp::traits::input_parameter< bool >::type monte_carlo_sampling(monte_carlo_samplingSEXP);
    Rcpp::traits::input_parameter< bool >::type out_of_core_computation(out_of_core_computationSEXP);
    run(nm, num_scales, seed, landmark_threshold, num_neighbors, num_trees, num_checks, transition_matrix_prune_thresh, num_walks, num_walks_per_landmark, monte_carlo_sampling, out_of_core_computation);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rschnel_run", (DL_FUNC) &_rschnel_run, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_rschnel(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
