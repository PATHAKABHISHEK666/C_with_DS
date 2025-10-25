/* Program to demonstrate the working of array */

#include <stdio.h>

int main() {
    int a[100], i, n;

    // Ask user for number of elements
    printf("How many numbers to store in the array (max 100)?\n");
    scanf("%d", &n);

    // Validate input
    if(n < 1 || n > 100) {
        printf("Invalid number of elements. Please enter a value between 1 and 100.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Display array contents
    printf("\nContents of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}