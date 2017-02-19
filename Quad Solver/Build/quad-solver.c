/**
@file quad-solver.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "../src/quad_constants.h"
#include "../src/input/input.h"
#include "../src/validation/input_val.h"
#include "../src/num_roots/num_roots.h"
#include "../src/calc_roots/calc_roots.h"
#include "../src/output/output.h"
#include "../src/format/format.h"


int main()
{
	#ifdef DEBUG
		FILE * logFile;
		logFile = fopen("log.txt","w+");
		fprintf(logFile, "----LOGFILE FOR QUADRATIC EQUATION SOLVER----\n");
		fclose(logFile);
	#endif
	int rootNum = 0;
	Coef coef;
	Root root;
	char *buf;
	char *input;
	input = get_input();
	if (!input_val(&coef, input)) {
		output("Invalid input");
		exit(1);
	}
	#ifdef DEBUG
		logFile = fopen("log.txt","a");
		fprintf(logFile, "\nReturn parameters to input_val():\n");
		fprintf(logFile, "\tCoef.a: %lf Coef.b:%lf Coef.c: %lf \n"
			,coef.a,coef.b,coef.c);
		fclose(logFile);
	#endif
	rootNum = num_roots(coef);
	calc_roots(coef, rootNum, &root);
	buf = format(rootNum, root);
	output(buf);
	free(input);
	free(buf);
}
