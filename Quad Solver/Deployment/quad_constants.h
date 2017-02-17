/**
 * @file quad_constants.h
 * @date Feb 15, 2017
 * @brief Constants for this project.
 */

/**
 * Coefficients struct for a quadratic equation.
 */
typedef struct {
	double a;
	double b;
	double c;
} Coef;

/**
 *The root struct.
 */
typedef struct {
	double x1;
	double x2;
} Root;

#define DEBUG

