// WRITE A C PROGRAM TO INPUT 10 NUMBERS INTO AN array and separate them into TWO DIFFERENT arrays, ONE FOR EVEN AND ONE FOR ODD


#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[10], even[10], odd[10];
    int i, eCount = 0, oCount = 0;

    clrscr();  

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Separate even and odd numbers
    for(i = 0; i < 10; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[eCount] = arr[i];
            eCount++;
        }
        else
        {
            odd[oCount] = arr[i];
            oCount++;
        }
    }

    printf("\nEven numbers are:\n");
    for(i = 0; i < eCount; i++)
    {
        printf("%d ", even[i]);
    }

    // Display odd numbers
    printf("\n\nOdd numbers are:\n");
    for(i = 0; i < oCount; i++)
    {
        printf("%d ", odd[i]);
    }

    getch();  
}
