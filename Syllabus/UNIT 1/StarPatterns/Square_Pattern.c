#include<stdio.h>

void main(){


    int n ;

    printf("Enter The Number of lines to Print\n");
    scanf("%d",&n);

    for(int i =1;i<=n;i++){

        for(int j = 1; j<=n; j++)
        printf("* ");

        printf("\n");

    }

}