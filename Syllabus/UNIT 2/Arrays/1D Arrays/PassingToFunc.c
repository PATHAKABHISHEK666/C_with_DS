#include<stdio.h>
int funArray(int[],int);
void main(){
    int a[5],i,sum=0;
    printf("Enter the array:\n");
    for(i=0;i<=4;i++){
    scanf("%d",&a[i]);
    }
    sum = funArray(a,5);
    printf("The Sum of the elements of array is %d",sum);
}
int funArray(int p[],int n){
    int s = 0,i;
    for(i=0;i<=n-1;i++){
        s = s+p[i];
    }
    return s;
}