// Write a C program that swaps the value of A and B using a function and a pointer


#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y);

void main()
{
    int a, b;

    clrscr();

    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);

    printf("\nBefore swapping:");
    printf("\nA = %d, B = %d", a, b);

    swap(&a, &b); 

    printf("\n\nAfter swapping:");
    printf("\nA = %d, B = %d", a, b);

    getch();  
}


void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
