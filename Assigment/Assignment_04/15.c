#include <stdio.h>
#include <conio.h>

void main() {
    float x, y = 1.0;
    int d, i;

    clrscr();

    printf("Enter base (x): ");
    scanf("%f", &x);

    printf("Enter exponent (d): ");
    scanf("%d", &d);

    if (d > 0) {
        for (i = 1; i <= d; i++)
            y *= x;
    } else if (d < 0) {
        for (i = 1; i <= -d; i++)
            y *= x;
        y = 1.0 / y;
    } else {
        y = 1.0;  // x^0 = 1
    }

    printf("Result: %.4f^%d = %.4f", x, d, y);

    getch();
}