#include<stdio.h>

void main(){


    int arr[5],i;

    printf("Enter the elements of array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("The entered array is:\n");
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }


}