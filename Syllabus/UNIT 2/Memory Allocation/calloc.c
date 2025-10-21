/*
    Program to demonstrate the use of dynamic memory allocation function calloc() 
    This program find the number of odd and number of evens of all elements of the array
*/



#include<stdio.h>
#include<stdlib.h>
#define NULL 0

int main(){
    int *ptr;
    int i,n,odd=0,even=0;

    printf("Enter the number of elements you want to store in the array : ");
    scanf("%d",&n);

    ptr = (int*) calloc(n,sizeof(int));
    
    
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
            if(*(ptr+i)%2==0){
                even++;
            }
            else{
                odd++;
            }
        }



        printf("Number of Even elements in array is = %d",even);
        printf("\nNumber of Odd elements in array is = %d",odd);
 

    }
}