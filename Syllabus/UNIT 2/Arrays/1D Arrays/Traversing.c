#include<stdio.h>
void main(){

    int n,i,a[10];

    printf("Enter the length of array\n");
    scanf("%d",&n);

    printf("Enter the elements of array\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }


    printf("Traversing of the array\n");
    for(i=0;i<=n-1;i++){
        printf("\n%d",a[i]);
    }


}
