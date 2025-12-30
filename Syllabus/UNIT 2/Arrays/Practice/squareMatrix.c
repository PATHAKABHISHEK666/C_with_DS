#include <stdio.h>

#define n 3
#define m 3

void main()
{
  int i, j;

  float a[n][m] = {{1.1, 2.2, 3.3},
                   {5.5, 6.6, 7.7},
                   {9.9, 10.10, 11.11}};

  printf("The contents of array are :\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%.2f\t", a[i][j]);
    }
    printf("\n");
  }
}