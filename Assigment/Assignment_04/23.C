// WRITE A C PROGRAM TO READ ELEMENTS INTO AN ARRAY, DISPLAY ALL THE ELEMENTS OF THE ARRAY AND FIND AND PRINT THE MAXIMUM AND MINIMUM VALUES PRESENT IN THE ARRAY


#include <stdio.h>
#include <conio.h>

void readArray(int arr[], int n);
void displayArray(int arr[], int n);
void findMinMax(int arr[], int n, int *min, int *max);

void main()
{
    int arr[10];
    int min, max;

    clrscr();  

    printf("Enter 10 elements of the array:\n");
    readArray(arr, 10);  
    printf("\nElements of the array are:\n");
    displayArray(arr, 10);

    findMinMax(arr, 10, &min, &max);

    printf("\n\nMaximum value in the array = %d", max);
    printf("\nMinimum value in the array = %d", min);

    getch();  
}


void readArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void findMinMax(int arr[], int n, int *min, int *max)
{
    int i;
    *min = arr[0];
    *max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}
