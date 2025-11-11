// Write a C program using functions and pointers to input two numbers 'a'and'b'.The program should compare the two numbers. If a is smaller than b, it should find the product (axb) using a function. And if b is smaller than a, it should find the division a/b using another function, using pointers to pass the value of variables to the function and display the result

#include <stdio.h>
#include <conio.h>

float multiply(int *x, int *y);
float divide(int *x, int *y);

void main()
{
    int a, b;
    float result;

    clrscr();  

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    if (a < b)
    {
        result = multiply(&a, &b);
        printf("\nSince a < b, Product = %.2f", result);
    }
    else if (a > b)
    {
        if (b != 0)
        {
            result = divide(&a, &b);
            printf("\nSince a > b, Division = %.2f", result);
        }
        else
        {
            printf("\nDivision not possible (b = 0).");
        }
    }
    else
    {
        printf("\nBoth numbers are equal.");
    }

    getch();  
}

float multiply(int *x, int *y)
{
    return (*x) * (*y);
}

float divide(int *x, int *y)
{
    return (float)(*x) / (*y);
}
