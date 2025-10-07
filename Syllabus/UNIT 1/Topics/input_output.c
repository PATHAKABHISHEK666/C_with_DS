 // - Write a program that takes two integers as input using scanf and prints their product.


#include <stdio.h> // Including header file for standard input/output functions

int main() {
    int num1, num2; // Declaring two variables to store two integers

    // Prompt user to enter two numbers to find their product
    printf("Enter two integers separated by space:\n");

    // Input validation
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    // Printing the product of the two entered numbers
    printf("\nThe Product of %d and %d = %d\n", num1, num2, num1 * num2);

    return 0;
}