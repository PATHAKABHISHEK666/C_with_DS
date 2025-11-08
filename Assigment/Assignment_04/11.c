#include <stdio.h>
#include <conio.h>

void main() {
    int start, end, i;

    clrscr();  
    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the second number: ");
    scanf("%d", &end);

    printf("Odd numbers between %d and %d are:\n", start, end);

    
    for (i = start + 1; i < end; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    getch(); 
}