#include <stdio.h> //Include standard input/output library

// Function to perform Binary search on an array
int binarySearch(int arr[], int size, int element)
{

  int low = 0;
  int high = size - 1;
  int mid;

  // START SEARCHING

  while (low <= high)
  {
    mid = (low + high) / 2;
    if (arr[mid] == element)
    {
      return mid;
    }
    if (arr[mid] < element)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  } // END SEARCHING

  return -1;
}

void main()
{
  // Declare and initialize a sorted array in ascending order
  int sortedArr[] = {2, 5, 8, 12, 15, 19, 23, 27, 31, 36};

  // Element to search for in the array
  int element = 5;
  // Calculate the number of elements in the array
  int size = sizeof(sortedArr) / sizeof(int);
  // Call the binarySearch function and store the result
  int searchIndex = binarySearch(sortedArr, size, element);
  // Print the result of the search
  printf("The element %d was found at index %d \n", element, searchIndex);
}