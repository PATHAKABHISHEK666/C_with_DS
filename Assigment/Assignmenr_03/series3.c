/*Program to print the series :- za+yb+xc+wd+.....+n*/
#include<stdio.h>
void main(){
    int n;
    char dec = 'z',asc='a';
    printf("Enter Number of Terms:\t");
    scanf("%d",&n);
        while(n>0){
        printf("%c%c + ",dec--,asc++);
        n--;
    }
}