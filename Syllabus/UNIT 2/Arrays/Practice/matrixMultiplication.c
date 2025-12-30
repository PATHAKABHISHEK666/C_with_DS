#include <stdio.h>

void main()
{
  int a[10][10], b[10][10], pr[10][10];

  int m, n, l, p, i, j, k;

  printf("Enter Row of first matix (<=10) : ");
  scanf("%d", &m);

  printf("Enter Colums of first matrix (<=10)");
  scanf("%d", &n);

  printf("Enter Row of second matix (<=10) : ");
  scanf("%d", &l);

  printf("Enter Colums of second matrix (<=10)");
  scanf("%d", &p);

  printf("Enter first Matrix : \n");

  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter second Matrix : \n");

  for (i = 0; i < l; i++)
  {
    for (j = 0; j < p; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }

  if (n != l)
  {
    printf("Multiplication is not possible: \n");
  }

  else
  {

    for (i = 0; i < m; i++)
    {
      for (j = 0; j < p; j++)
      {
        pr[i][j] = 0;

        for (k = 0; k < n; k++)
        {
          pr[i][j] += a[i][k] * b[k][j];
        }
      }
    }
  }

  printf("Matrix Multiplication is :\n");

  for (i = 0; i < m; i++)
  {
    for (j = 0; j < p; j++)
      printf("%d\t", pr[i][j]);

    printf("\n");
  }
}
