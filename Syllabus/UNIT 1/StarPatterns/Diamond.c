#include<stdio.h>

void main(){


    int n ;

    printf("Enter The Number of lines to Print\n");
    scanf("%d",&n);
    for(int i =1;i<n;i++){

            for(int k = n-i;k>0;k--)
            printf(" ");
            for(int j = 1; j<=i*2-1; j++)
            printf("*");


            printf("\n");

        }

    for(int i =1;i<=n;i++){     

        for(int k = 1;k<i;k++)
        printf(" ");
        for(int j = 2*n-1; j>=i*2-1; j--)
        printf("*");


        printf("\n");

    }

}