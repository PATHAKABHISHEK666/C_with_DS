/*
Write a C program that uses a function and pointers to set the values, swap the smaller value to zero and the maximum value to 1, and if both are equal, then set both to 1*/


#include <stdio.h>
#include <conio.h>

void modifyValues(int *x, int *y);

void main()
{
    int a, b;

    clrscr();  

    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);

    printf("\nBefore modification:");
    printf("\nA = %d, B = %d", a, b);

    modifyValues(&a, &b);  

    printf("\n\nAfter modification:");
    printf("\nA = %d, B = %d", a, b);

    getch(); 
}

void modifyValues(int *x, int *y)
{
    if (*x > *y)
    {
        *x = 1;
        *y = 0;
    }
    else if (*y > *x)
    {
        *y = 1;
        *x = 0;
    }
    else
    {
        *x = 1;
        *y = 1;
    }
}
