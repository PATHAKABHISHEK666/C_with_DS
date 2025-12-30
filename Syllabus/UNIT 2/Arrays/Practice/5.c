#include <stdio.h>
#define n 3
#define m 3

void main()
{

  int i, j;
  int a[n][m] = {
      {1, 2, 3},
      {5, 6, 7},
      {9, 10, 11}};

  printf("The contents of array are :\n");

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
}