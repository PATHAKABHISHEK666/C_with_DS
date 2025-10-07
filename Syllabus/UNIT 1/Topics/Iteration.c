#include <stdio.h> // Include header file for standard input/output functions

int main() {

    /* -- Program 1 Starts -- */
    // Printing first 10 natural numbers using different loops
    printf("\nPrint first 10 natural numbers\n");

    printf("\n-- Using for loop --\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d, ", i);
    }

    printf("\n\n-- Using while loop --\n");
    int i = 1;
    while (i <= 10) {
        printf("%d, ", i);
        i++;
    }

    printf("\n\n-- Using do-while loop --\n");
    i = 1;
    do {
        printf("%d, ", i);
        i++;
    } while (i <= 10);
    /* -- Program 1 Ends -- */

    /* -- Program 2 Starts -- */
    // Calculate the factorial of a given number using loop
    int number, factorial = 1;

    printf("\n\nProgram to calculate the factorial of a given number\n");
    printf("Please enter a number: ");
    scanf("%d", &number);

    int temp = number; // Store original number for display

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (number > 0) {
            factorial *= number;
            number--;
        }
        printf("The factorial of %d is %d\n", temp, factorial);
    }
    /* -- Program 2 Ends -- */

    return 0;
}