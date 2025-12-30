#include <stdio.h>
void main()
{
  int small, high, a[100], i, n, s, h_pos, l_pos;
  printf("How many elements in an array:  \n");
  scanf("%d", &n);
  printf("Enter the elements :\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  small = a[0];
  high = a[0];
  h_pos = 0;
  l_pos = 0;
  for (i = 0; i < n; i++)
  {
    if (small > a[i])
    {
      small = a[i];
      l_pos = i;
    }
    if (high < a[i])
    {
      high = a[i];
      h_pos = i;
    }
  }
  printf("\nThe Smallest of the entered no is %d", small);
  printf("\nThe Position of the smallest element is %d\n", l_pos + 1);

  printf("\nThe Largest of the entered no is %d\n", high);
  printf("The Position of the largest element is %d", h_pos + 1);
}