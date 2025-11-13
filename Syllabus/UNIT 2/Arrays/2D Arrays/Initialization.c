#include<stdio.h>

void main(){

    int a[3][3],i,j;

    printf("Enter the elements of array:\n");

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("Elem no %d-%d :  ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("The elements of the array are:\n");

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}