 // s = 1+ 2*1 + 3*2 + 4*3 + 5*4 + .... + n*n-1
 #include<stdio.h>
 void main(){
    int n,i=2;
    printf("Enter number of terms:\t");
    scanf("%d",&n);
    printf("s = 1 ");
    while(n>1){
        printf("+ %d*%d",i,i-1);
        n--;
        i++;
    }
 }