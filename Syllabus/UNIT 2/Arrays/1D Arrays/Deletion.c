#include<stdio.h>

int i,n;
void main(){

    int a[100],pos;

    void del(int[],int,int);

    printf("How many elements in the array\n");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for(i=0;i<n;i++){

        scanf("%d",&a[i]);

    }

    printf("On which position element do you want to delete\n");
    scanf("%d",&pos);

    del(a,pos,n);

}

void del(int a[],int pos,int n){

    int j,item;

    item = a[pos];

    for(j=pos;j<=n-1;j++){
        a[j] = a[j+1];
    }
    n=n-1;

    printf("New Array\n");
    for(i=0;i<=n;i++){
        printf("%d\n",a[i]);
    }

}