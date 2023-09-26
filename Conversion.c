
// function.c main method
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "conversion.h"

// conversion.h header file
double conversion(double number1 / double number2);

const float EXIT_PROGRAM = -1.0;
const float MINIMUM_VALUE = 0.1;

int main() // begin main {
	double gallons = 0; // gallons entered by user
	double miles   = 0; // miles entered by user
	double sumGall = 0; // sum the total gallons entered
	double sumMile = 0; // sum the total miles entered

	do {
		printf("Enter gallons used: (-1.0 to end): "); // user enters an amount in gallons
		scanf("%lf", &gallons); // scan the value
		while (gallons < MINIMUM_VALUE && gallons != EXIT_PROGRAM) { // condition for invalid cases 
			printf("You have entered an invalid value for gallons, try again: ");
			scanf("%lf", &gallons);
		}		
		if (gallons > MINIMUM_VALUE) {
				sumGall = sumGall + gallons; // if valid cases, add gallons to a total sum
		}

		if (gallons != EXIT_PROGRAM) {
			printf("Enter miles used: "); // enter the miles
			scanf("%lf", &miles);
			while (miles < MINIMUM_VALUE && miles != EXIT_PROGRAM) { // condition for invalid cases 
				printf("You have entered an invalid value for miles, try again: ");
				scanf("%lf", &miles);
				
			}	
			if (miles > MINIMUM_VALUE) {
				sumMile = sumMile + miles; // if valid casdes, add miles to total miles sum
			}
		}

		if (gallons != EXIT_PROGRAM && miles != EXIT_PROGRAM) { // if condition is not -1, convert miles / gallons 
			printf("\nThe miles / gallons for this tank was %.6f\n\n", conversion(miles, gallons));
		}
	} while (gallons != EXIT_PROGRAM && miles != EXIT_PROGRAM); // end do while loop condition

	if (sumGall > 0) // checks for 0 condition {
		printf("\nThe overall average miles / gallons is: %.6f\n", conversion(sumMile, sumGall));
	}
	else {
		printf("The overall average miles could not be completed ;-(\n"); // sad face if NaN is found, as in divide by zero
	}
	printf("\nThat's all folks - press any key to exit\n");

} // end main


// implementation of conversion.h header file
double conversion(double number1, double number2)
{
    return number1 / number2;
}
