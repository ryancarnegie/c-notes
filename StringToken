int main(void) {

	char string[] = "  This ;is,,a-;sentence; with,;7 ,tokens?!";
	printf("The string to be tokenized is:\n%s\n\n", string);
	puts("The tokens are:");

	char* tokenPtr = strtok(string, " ,;-?!");

	const char* separators = { " ,;-?!" };

	while (tokenPtr != NULL) {
		printf("%s\n", tokenPtr);
		tokenPtr = strtok(NULL, separators);
	}

	printf("The new string is: \n%s\n", string);
	return 0;
}
