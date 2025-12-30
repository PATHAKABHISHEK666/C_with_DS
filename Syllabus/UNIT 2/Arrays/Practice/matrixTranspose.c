#include <stdio.h>

void main()
{
  int a[3][3], b[3][3], i, j, m, n;

  printf("Enter the elements of the matrix A \n");

  {
    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
        scanf("%d", &a[i][j]);
        b[j][i] = a[i][j];
      }
    }

    printf("\nTranspose of matrix A is \n");

    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
        printf("%d\t", b[i][j]);
      }
      printf("\n");
    }
  }
}