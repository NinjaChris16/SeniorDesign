//
//  scanf.c
//  scanf
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
	float enteredVal;

	printf("Enter a value: ");
	scanf("%f",&enteredVal);
	printf("enteredVal: %f\n", enteredVal);

	return 0;
}
