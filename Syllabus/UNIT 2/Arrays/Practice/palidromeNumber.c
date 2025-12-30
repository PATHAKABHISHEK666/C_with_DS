#include <stdio.h>

void main()
{

  int a[10], num, i = 0, result = 0, n;

  printf("Enter the number : ");
  scanf("%d", &n);

  num = n;

  while (num != 0)
  {
    result = result * 10;
    a[i] = num % 10;
    num = num / 10;
    result = result + a[i];
    i++;
  }

  if (result == n)
  {
    printf("The Number is pallandrome");
  }
  else
    printf("The Number is not Pallandrome");
}