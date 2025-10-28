#include <stdio.h>

/*

  Program: Delete an element from an array
  ----------------------------------------
  -> This program takes an array of integers as input,
  -> Asks the user to specify an element to delete
  -> If the element exists, it removes it by shifting
  -> the remaining elements left and updates the array size



*/

int main()
{

  int arr[100];   // Array declaration with maximum capacity of 100 elements
  int size;       // Number of elements in the array
  int element;    // Element to delete
  int index = -1; // To store the index of the element to delete(-1 means not found)


  //Program header for user readability
  printf("\n-------------------------------\n");
  printf("Program to delete array element");
  printf("\n-------------------------------\n");

  // Get the array size from the user
  printf("\nPlease Enter the Size of Array :  ");
  scanf("%d", &size);


  //Input array elements from user
  printf("\nEnter The Elements of array : ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  //Display the entered array
  printf("The Elements of array : ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  //Ask for the element to delete
  printf("\nEnter the element you want to delete: ");
  scanf("%d", &element);

  // FINDING INDEX OF ELEMENT
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == element)
    {
      index = i;
      break;
    }
  }

  if (index == -1)
  {
    printf("\nElement %d not found in the array.\n");
  }
  else
  {

    for (int i = index; i < size - 1; i++)
    {
      arr[i] = arr[i + 1];
    }
    size--;
    printf("\n-------------------------------\n");
    printf("Deleted element %d at index %d\n", element, index);
    printf("\n-------------------------------\n");

    printf("The new array is :\n");
    for (int i = 0; i < size; i++)
    {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}