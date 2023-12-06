#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define STRING 15
#define MAX_STRING_LENGTH 20

int main(int argc, char *argv[]) {

	char string[MAX_STRING_LENGTH] = "this is a string\n";
	for (int i = STRING; string[i] >= STRING; i--) {
		printf("%c", string[i]);
	}
	return 0;
}
