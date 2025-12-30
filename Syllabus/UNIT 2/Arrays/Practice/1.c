// 1.Program to evaluate the average of five numbers in array

#include <stdio.h>
void main()
{
  int a[5], sum = 0, i;
  float avg;

  printf("Enter the Elements of arays :\n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
    sum += a[i];
  }
  avg = sum / 5.01
  ;
  printf("Average = %f", avg);
}