// WRITE  A C PROGRAM TO INPUT ELEMENTS IN TWO DIFFERENT ARRAY AND CREATE A THIRD ARRAY CONTAINING ONLY THE ELEMENTS THAT ARE NOT COMMON TO BOTH ARRAY


#include <stdio.h>
#include <conio.h>

void main()
{
    int arr1[10], arr2[10], arr3[20];
    int i, j, k = 0, flag;

    clrscr();

    printf("Enter 10 elements for first array:\n");
    for(i = 0; i < 10; i++)
    {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter 10 elements for second array:\n");
    for(i = 0; i < 10; i++)
    {
        printf("arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < 10; i++)
    {
        flag = 0;
        for(j = 0; j < 10; j++)
        {
            if(arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            arr3[k] = arr1[i];
            k++;
        }
    }

    for(i = 0; i < 10; i++)
    {
        flag = 0;
        for(j = 0; j < 10; j++)
        {
            if(arr2[i] == arr1[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            arr3[k] = arr2[i];
            k++;
        }
    }

    
    printf("\nElements that are NOT common to both arrays are:\n");
    if(k == 0)
        printf("No unique elements found — both arrays have the same elements.");
    else
    {
        for(i = 0; i < k; i++)
        {
            printf("%d ", arr3[i]);
        }
    }

    getch();  
}
