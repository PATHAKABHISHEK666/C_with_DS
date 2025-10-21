/*Program to print the series :- a+1 + b+2 + c+3 + .... + n*/
#include<stdio.h>
void main(){
    int i=1,n;
    char ch = 'a';
    printf("Enter Number of Terms:\t");
    scanf("%d",&n);
        while(n>0){
        printf("%c+%d + ",ch++,i++);
        n--;
    }
}