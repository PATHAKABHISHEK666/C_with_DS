#include <stdio.h> //Include standard input/output library

// Function to perform linear search on an array
int linearSearch(int arr[], int size, int element)
{
  // Loop through each element in the array
  for (int i = 0; i < size; i++)
  {
    // If the current element matches the target, return its index
    if (arr[i] == element)
      return i;
  }
  // If element is not found, return -1
  return -1;
}

void main()
{
  // Declare and initialize an array of integers
  int arr[] = {1, 2, 3, 5, 7, 65, 34, 22, 123, 909, 9090};
  // Element to search for in the array
  int element = 0;
  // Calculate the number of elements in the array
  int size = sizeof(arr) / sizeof(int);
  // Call the linearSearch function and store the result
  int searchIndex = linearSearch(arr, size, element);
  // Print the result of the search
  printf("The element %d was found at index %d \n", element, searchIndex);
}