// seqinquiry.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int request;
    int account;
    double balance;
    char name[30];
    FILE* cfPtr;

    // fopen opens the file; exits program if file cannot be opened 
    if ((cfPtr = fopen("clients.txt", "r")) == NULL)
    {
        printf("File could not be opened\n");
    }
    else
    {
        printf("Enter request\n"
            " 1 - List accounts with zero balances\n"
            " 2 - List accounts with credit balances\n"
            " 3 - List accounts with debit balances\n"
            " 4 - List accounts and sum their balances\n"
            " 5 - End program\n? ");
        scanf("%d", &request);
        fflush(stdin);
        float sum = 0.0;

        while (request != 5)
        {
            // read account, name and balance from file
            fscanf(cfPtr, "%d%s%lf", &account, name, &balance);

            switch (request)
            {

            case 1:
                printf("\nAccounts with zero balances:\n");

                // read file contents (until eof) */
                while (!feof(cfPtr))
                {
                    if (balance == 0.0)
                    {
                        printf("%-10d%-13s%7.2f\n",
                            account, name, balance);
                    }

                    // read account, name and balance from file 
                    fscanf(cfPtr, "%d%s%lf",
                        &account, name, &balance);
                }

                break;

            case 2:
                printf("\nAccounts with credit balances:\n");

                // read file contents (until eof)
                while (!feof(cfPtr))
                {
                    if (balance < 0.0)
                    {
                        printf("%-10d%-13s%7.2f\n",
                            account, name, balance);
                    }

                    // read account, name and balance from file
                    fscanf(cfPtr, "%d%s%lf",
                        &account, name, &balance);
                }

                break;

            case 3:
                printf("\nAccounts with debit balances:\n");

                // read file contents (until eof) 
                while (!feof(cfPtr))
                {
                    if (balance > 0.0)
                    {
                        printf("%-10d%-13s%7.2f\n",
                            account, name, balance);
                    }

                    // read account, name and balance from file
                    fscanf(cfPtr, "%d%s%lf",
                        &account, name, &balance);
                }
                break;

            case 4:
                printf("Total balance across all accounts:\n");
                while (!feof(cfPtr))
                {
                    printf("%-10d%-13s%11.2f\n", account, name, balance);
                    sum += balance;
                    // read account, name and balance from file
                    fscanf(cfPtr, "%d%s%lf\n",
                        &account, name, &balance);
                }
                printf("The sum of balances:      %2.2f\n", sum);
                break;

            }
            rewind(cfPtr); // return cfPtr to beginning of file
            printf("\n? ");
            scanf("%d", &request);
            fflush(stdin);
        }
        fclose(cfPtr); // fclose closes the file
    }
}
