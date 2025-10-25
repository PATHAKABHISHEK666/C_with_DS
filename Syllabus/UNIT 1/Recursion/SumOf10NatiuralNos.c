// Program to find the sum of ten natural numbers using recursion
#include<stdio.h>
int sum(int a);
void main(){
    int x,y;
    printf("\nEnter Any Positive int Number\n");
    scanf("%d",&y);
    printf("The sum of first %d integers = %d\n",y,sum(y));

}
int sum(int y){
    if(y==0){
        return 0;
    }
    else{
        return (y+sum(y-1));
    }

}