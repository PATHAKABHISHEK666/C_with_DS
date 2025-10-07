#include <stdio.h>

int factorial_fun(int number);

int main() {
    int number;

    printf("Enter the number to calculate factorial: ");
    scanf("%d", &number);

    printf("\nThe Factorial of %d is %d\n", number, factorial_fun(number));

    return 0;
}

int factorial_fun(int number) {
    if (number <= 1)
        return 1;
    else
        return number * factorial_fun(number - 1);
}