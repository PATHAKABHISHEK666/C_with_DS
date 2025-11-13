#include <stdio.h>

void display(int *ptr, int n)
{
  printf("Printing elements of array  :\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      printf("%d ", *(ptr++));
    printf("\n");
  }
}

void main()
{
  int *p;

  int arr[3][3] = {
      {1, 2, 3},
      {3, 2, 1},
      {9, 8, 7}};
  p = (int *)arr;
  display(p, 3);
}