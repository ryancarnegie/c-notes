#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int account;
	char name[30];
	double balance;

	FILE* cfPtr;

	if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
		printf("File could not be opened!\n");
	}
	else {
		printf("Enter the account, name, and balance.\n");
		printf("Enter EOF to end input. (Ctrl-Z)\n");
		printf("? ");
		scanf("%d", &account);

		while (!feof(stdin)) {
			scanf("%s%lf", name, &balance);
			fflush(stdin);
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("? ");
			scanf("%d", &account);
		}
	}
	fclose(cfPtr);
	return 0;
}


//


