#include <stdio.h>
void main()
{
  int small, a[100], i, n, s, pos;
  printf("How many elements in an array:  \n");
  scanf("%d", &n);
  printf("Enter the elements :\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  small = a[0];
  pos = 0;
  for (i = 0; i < n; i++)
  {
    if (small > a[i])
    {
      small = a[i];
      pos = i;
    }
  }
  printf("\nThe Smallest of the entered no is %d\n", small);
  printf("\nThe Position of the smallest element is %d", pos + 1);
}