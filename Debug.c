#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "func.h"

#define DEBUG

static int hello = 5;
extern int value = 100;
int val2 = 10;

int main() {
	int x = 5;
	printf("var x = %d\n", x);
	printf("cubed # is: %d\n", cube(5));

	printf("%d\n", val2);
	printf("%d\n", value);
	
#ifdef DEBUG
	printf("\nDebug statement 1\n\n");
	hello = hello + 1;
	printf("static hello %d\n", hello);
#endif

	return 0;
}
