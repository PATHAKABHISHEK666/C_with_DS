#include<stdio.h>

void main(){


    int a[10],i;

    printf("Enter The Array\n");
    for(i = 0;i<=9;i++){
        scanf("%d",&a[i]);
    }

    printf("The Entered Array:\n");
    for(i=0;i<=9;i++){
        printf("%d\n",a[i]);
    }


}