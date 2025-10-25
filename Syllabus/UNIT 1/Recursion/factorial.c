#include<stdio.h>
int fact(int);
void main(){
    int result,number;
    printf("\nEnter the number to find factorial\n");
    scanf("%d",&number);
    result = fact(number);
    printf("\nThe factorial of %d is %d",number,result);
}
int fact(int n){
    if(n==1){
        return n;
    }
    else{
        return (n*fact(n-1));
    }
}