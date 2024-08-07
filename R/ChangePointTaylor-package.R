#' ChangePointTaylor
#'
#' A basic implementation of the change in mean detection method outlined in: Taylor, Wayne A. (2000) <https://variation.com/wp-content/uploads/change-point-analyzer/change-point-analysis-a-powerful-new-tool-for-detecting-changes.pdf>. The package recursively uses the mean-squared error change point calculation to identify candidate change points. The candidate change points are then re-estimated and Taylor's backwards elimination process is then employed to come up with a final set of change points. Many of the underlying functions are written in C++ for improved performance. 
#' 
#'
#' @name ChangePointTaylor-package
#' @aliases ChangePointTaylor-package
#' @title Identify Changes in Mean
#' @description A basic implementation of the change in mean detection method outlined in: Taylor, Wayne A. (2000) <https://variation.com/wp-content/uploads/change-point-analyzer/change-point-analysis-a-powerful-new-tool-for-detecting-changes.pdf>. The package recursively uses the mean-squared error change point calculation to identify candidate change points. The candidate change points are then re-estimated and Taylor's backwards elimination process is then employed to come up with a final set of change points. Many of the underlying functions are written in C++ for improved performance. 
#' @author
#' Michael Marks <michaelmarks@analyticaconsulting.com>
NULL