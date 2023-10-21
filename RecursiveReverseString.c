#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void reverse(const char* const sPtr);

int main(void) {

	char sentence[80] = "";
	puts("Enter a line of text: ");
	fgets(sentence, 80, stdin); // reads a line of text
	printf("\n%s", "The line printed backwards is:");
	reverse(sentence);
	puts("");

	return 0;
}

void reverse(const char* const sPtr) {
	if ('\0' == sPtr[0]) {
		return;
	}
	else {
		reverse(&sPtr[1]);
		putchar(sPtr[0]);
	}
}
