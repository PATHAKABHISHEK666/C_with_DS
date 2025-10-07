#include<stdio.h>

//Function to swap two numbers using call by value

void swap(int a,int b){
    int temp = a;
    a=b;
    b=temp;
    //This swap only affects local copies of a and p

    printf("Inside swap (call by value): a = %d, b = %d\n",a,b);

}

int main(){
    int x = 10, y = 20;

    printf("Before swap:x = %d, y = %d\n",x,y);
    swap(x,y);//Pass by value
    printf("After swap: x = %d, y = %d\n",x,y);

    return 0;
}