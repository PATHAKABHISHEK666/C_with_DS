// 3. Write a program which read two matrix and then print a matrix which is addition of these two matrix

#include <stdio.h>

void main()
{

  int a[3][3], b[3][3], s[2][2], i, j;

  printf("Element of the first matrix :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Element of the second matrix :\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      s[i][j] = a[i][j] + b[i][j];
    }
  }
  printf("Sum of both matrix :\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", s[i][j]);
    }
    printf("\n");
  }
}