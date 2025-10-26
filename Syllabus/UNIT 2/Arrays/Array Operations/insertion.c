#include <stdio.h>

// FUNCTION TO DISPLAY ARRAY ELEMENTS
void display(int arr[], int size)
{
  printf("Array Elements: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d  ", arr[i]);
  }
  printf("\n----------------------------\n");
}

// FUNCTION TO INSERT AN ELEMENT INTO ARRAY
int inserter(int arr[], int capacity, int size, int index, int element)
{
  // CHECK IF INSERTION POSSIBLE
  if (size >= capacity)
  {
    printf("Insetion is not possible: array is full\n");
    return 0;
  }
  else if (index < 0 || index > size)
  {
    printf("Invalid index! Please enter index between 0 and %d.\n", size);
    return 0;
  }
  else
  {
    // SHIFT ELEMENTS TO THE RIGHT TO MAKE SPACE
    for (int i = size - 1; i >= index; i--)
    {
      arr[i + 1] = arr[i];
    }
    // INSERT NEW ELEMENT
    arr[index] = element;
    printf("\n--Insertion Completed!--\n");
    return 1;
  }
}

int main()
{
  printf("Program of Array insertion\n\n");
  printf("----------------------------");

  // INITIALIZATION OF ARRAY WITH INITIAL VALUES
  int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8};
  int index, element, size = 8;
  int capacity = sizeof(arr) / sizeof(int);
  printf("\nThe Original Array is : \n");
  display(arr, size);
  // TAKE USER INPUT
  printf("\nEnter the element and index to insert (e.g., 99 3)\n");
  scanf("%d %d", &element, &index);

  // ATTEMPT INSERTION
  if (inserter(arr, capacity, size, index, element))
    size += 1; // ONLY INCREASE SIZE IF INSERTION SUCCEEDED
  printf("----------------------------");

  printf("\nThe Updated Array is : \n");
  display(arr, size);
  return 0;
}