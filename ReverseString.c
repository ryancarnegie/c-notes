Approach #1
// This approach does not swap the values unlike the later.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[]) {
	char string[20] = "hello party time";
	for (int i = 0; i < string[i]; i++) {
	printf("%c", string[i]);
	}
	puts("");
	
	for (int q = strlen(string); q >= 0; q--) {
		printf("%c", string[q]);
	}
	return 0;
}

Approach #2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void rev(char string[]);
void reverse(char* string);

int main(int argc, char* argv[]) {
	char string[20] = "hello party time";
	printf("%s", string);
	rev(string);
	printf("%s\n", string);
	return 0;
}
void rev(char string[]) {
	int length = strlen(string);
	printf("length is: %d\n", length);

	int start = 0;
	int end = length - 1;

	while (start < end) {
		char temp = string[start];
		string[start] = string[end];
		string[end] = temp;
		start++;
		end--;
	}	
}


Approach #3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char* string);

int main(int argc, char* argv[]) {
	printf("%s\n", string1);
	reverse(string1);
	printf("%s\n", string1);
	return 0;
}
void reverse(char* string) {
	int length = strlen(string);
	int temp = 0;

	for (int i = 0; i < length / 2; i++) {
		temp = string[i];
		string[i] = string[length - i - 1];
		string[length - i - 1] = temp;
	}
}









// An older attempt when I was still learning before understanding swaps, placed here as a reminder.
#define STRING 15
#define MAX_STRING_LENGTH 20
int main() {
	char string[MAX_STRING_LENGTH] = "this is a string\n";
	for (int i = STRING; string[i] >= STRING; i--) {
		printf("%c", string[i]);
	}
	return 0;
}
