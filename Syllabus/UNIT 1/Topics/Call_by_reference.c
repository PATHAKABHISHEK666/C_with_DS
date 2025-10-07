#include <stdio.h>

//Function to swap two numbers using call by reference

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    // This swap affects the actual memory locations of a and b
    printf("Inside swap (call by reference): a = %d, b = %d\n",*a,*b);
}
int main(){

    int x = 10,y=20;

    printf("Before swap: x = %d, y = %d\n",x,y);
    swap(&x,&y);//Pass by reference using pointers
    printf("After swap: x = %d, y = %d\n",x,y);//Values are swapped

    return 0;
}