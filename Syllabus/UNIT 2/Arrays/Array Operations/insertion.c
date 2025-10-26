#include <stdio.h>
void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
int indexInsetion(int arr[], int size, int element, int capacity, int index)
{
  if (size >= capacity)
  {
    printf("ARRAY IS FULL CAN't INSERT");
    return -1;
  }
  for (int i = size - 1; i >= index; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[index] = element;
  return 1;
}
int main()
{
  int arr[100] = {1, 2, 3, 4, 5, 6};
  int size = 224, element = 23, index = 3;
  display(arr, size);
  indexInsetion(arr, size, element, 100, index);
  size += 1;
  display(arr, size);
  return 0;
}