// A
// A B
// A B C
// A B
// A

#include <stdio.h>
#include <conio.h>

void main()
{
  int i, j;
  clrscr();

  // Upper half
  for (i = 1; i <= 3; i++)
  {
    for (j = 1; j <= i; j++)
      printf("%c ", 'A' + j - 1);
    printf("\n");
  }

  // Lower half
  for (i = 2; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
      printf("%c ", 'A' + j - 1);
    printf("\n");
  }

  getch();
}