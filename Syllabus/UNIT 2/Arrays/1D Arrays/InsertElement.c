#include<stdio.h>

void insert (int a[],int,int,int);
int i,len,pos,num;

void main(){
    int a[100];
    printf("Enter integers to be read");
    scanf("%d",&len);
    printf("Enter Integers ");
    for(i = 0;i<=len-1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter Integer to be inserted");
    scanf("%d",&num);
    printf("Enter Position in the array for insertion");
    scanf("%d",&pos);
    --pos;
    insert(a,len,pos,num);
}
void insert(int a[], int len, int pos, int num){
    for(i=len;i>=pos;i--){
        a[i+1] = a[i];
    }
    a[pos] = num;
    if(pos>len){
        printf("Insertion Outside the array");
    }len++;
    printf("New Array :\n");
    for(i=0;i<len;i++){
        printf("%d\t",a[i]);
    }
}