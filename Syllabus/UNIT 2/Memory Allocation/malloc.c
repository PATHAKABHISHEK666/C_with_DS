/*
    Program to demonstrate the use of dynamic memory allocation function malloc() 
    This program find the sum and average of all elements of the array
*/



#include<stdio.h>
#include<stdlib.h>
#define NULL 0

int main(){
    int *ptr;
    int i,n,sum=0;

    float avg;

    printf("Enter the number of elements you want to store in the array : ");
    scanf("%d",&n);

    ptr = (int*) malloc(n*sizeof(int));
    
    
    if(ptr == NULL){
        printf("The Required amount of memory is not available");

        return 0;
    }
    else{

        printf("Enter The Elements\n");

        for(i=0;i<n;i++){
            scanf("%d",ptr+i);
        }

        for(i = 0; i<n;i++){
            sum+=(*(ptr+i));
        }



        printf("Sum of %d elements of array is = %d",n,sum);
        avg = sum/n;
        printf("\nThe Average of %d number of the array is %f",n,avg);


    }
}