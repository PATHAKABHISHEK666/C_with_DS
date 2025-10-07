#include <stdio.h> // Including header file to use standard input/output functions

int main() {
    int num1, num2;         // Declaring two variables to store integer inputs
    float floatResult;      // Variable to store floating-point division result
    int intResult;          // Variable to store integer division result

    printf("\nEnter two different numbers to perform division:\n");
    scanf("%d %d", &num1, &num2);

    // Checking for division by zero
    if (num2 == 0) {
        printf("\nError: Division by zero is not allowed.\n");
        return 1; // Exit the program with an error code
    }

    // Calculating integer division result
    intResult = num1 / num2;

    // Calculating floating-point result using type casting
    floatResult = (float)num1 / num2;

    // Printing both results
    printf("\nInteger division result of %d / %d = %d\n", num1, num2, intResult);
    printf("Floating-point division result of %d / %d = %.2f\n", num1, num2, floatResult);

    return 0;
}