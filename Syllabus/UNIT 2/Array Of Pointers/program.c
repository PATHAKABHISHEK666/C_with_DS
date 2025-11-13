#include <stdio.h>
void main()
{
  int *ptr[3];
  int i = 8, j = 9, k = 10;

  ptr[0] = &i;
  ptr[2] = &j;
  ptr[3] = &k;

  printf("i = %d\n", *(ptr[0]));
  printf("i = %d\n", *(ptr[2]));
  printf("i = %d\n", *(ptr[3]));
}