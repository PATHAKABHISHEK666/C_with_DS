/*
- Write a program that checks if a number is positive, negative, or zero using `if-else`.
- Write a program that uses `switch` to display the day of the week for a given number (1–7).
*/


#include <stdio.h> // Include header file for standard input/output functions

int main() {
    // Program 1: Check if a number is positive, negative, or zero
    printf("\n-- Program 1 Start --\n");

    int number; // Declare variable to store the input number

    // Prompt the user to input a number2
    printf("\nPlease enter the number to check: ");
    scanf("%d", &number);

    // Checking the entered number using if-else
    if (number > 0) {
        printf("\nThe entered number %d is positive.\n", number);
    } else if (number < 0) {
        printf("\nThe entered number %d is negative.\n", number);
    } else {
        printf("\nThe entered number %d is zero.\n", number);
    }

    printf("\n-- Program 1 End --\n");

    printf("\n--------------------\n");

    // Program 2: Display day of the week using switch
    printf("\n-- Program 2 Start --\n");

    int day_no; // Declare variable to store day number

    // Prompt the user to input day number
    printf("\nEnter the number of the day (1 to 7): ");
    scanf("%d", &day_no);

    // Use switch case to determine the day
    switch (day_no) {
        case 1:
            printf("\nMonday\n");
            break;
        case 2:
            printf("\nTuesday\n");
            break;
        case 3:
            printf("\nWednesday\n");
            break;
        case 4:
            printf("\nThursday\n");
            break;
        case 5:
            printf("\nFriday\n");
            break;
        case 6:
            printf("\nSaturday\n");
            break;
        case 7:
            printf("\nSunday\n");
            break;
        default:
            printf("\nInvalid day number. Please enter a number between 1 and 7.\n");
            break;
    }

    printf("\n-- Program 2 End --\n");

    return 0;
}