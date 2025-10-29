#include <stdio.h>

void sort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void main()
{
  int arr[100], size;

  printf("Enter the size of array : ");
  scanf("%d", &size);

  printf("\nEnter the elements of array : ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\nThe array before Sorting : ");
  for (int i = 0; i < size; i++)
  {
    printf("%d  ", arr[i]);
  }

  sort(arr, size);
  printf("Sorted : ");
  for (int i = 0; i < size; i++)
  {
    printf("%d  ", arr[i]);
  }
}