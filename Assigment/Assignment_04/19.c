// Write a program that extracts the two least significant digits of an integer



#include <stdio.h>
#include <conio.h>

void main()
{
    int num, ones, tens;

    clrscr();  

    printf("Enter an integer: ");
    scanf("%d", &num);

    ones = num % 10;        
    tens = (num / 10) % 10;  

    printf("\nThe tens digit is: %d", tens);
    printf("\nThe ones digit is: %d", ones);

    getch();
}
