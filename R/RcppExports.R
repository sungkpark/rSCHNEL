# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' Run the HSNE dimensionality reducion algorithm on a NumericalMatrix.
#' @param nm A numeric matrix on which the algorithm is run.
#' @param num_scales Number of scales of the HSNE hierarchy.
#' @param landmark_threshold
#' @param num_neighbors
#' @param num_trees
#' @param num_checks
#' @param transition_matrix_prune_thresh
#' @param num_walks
#' @param num_walks_per_landmark
#' @param monte_carlo_sampling
#' @param out_of_core_computation
#' @example run(parse_to_matrix(file_path))
run <- function(nm, num_scales, seed, landmark_threshold, num_neighbors, num_trees, num_checks, transition_matrix_prune_thresh, num_walks, num_walks_per_landmark, monte_carlo_sampling, out_of_core_computation) {
    invisible(.Call(`_rschnel_run`, nm, num_scales, seed, landmark_threshold, num_neighbors, num_trees, num_checks, transition_matrix_prune_thresh, num_walks, num_walks_per_landmark, monte_carlo_sampling, out_of_core_computation))
}

