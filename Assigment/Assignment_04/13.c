/*

        *
      * * *
    * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, space;
    clrscr();

    // Upper half
    for (i = 1; i <= 4; i++) {
        space = 4 - i;
        for (j = 1; j <= space; j++)
            printf("  ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("* ");
        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--) {
        space = 4 - i;
        for (j = 1; j <= space; j++)
            printf("  ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("* ");
        printf("\n");
    }

    getch();
}
