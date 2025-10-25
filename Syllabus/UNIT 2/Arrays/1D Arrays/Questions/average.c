
// Write  a program to evaluate the average of five numbers

#include<stdio.h>

void main(){
    float a[5],sum=0;
    int i;

    printf("Enter the Numbers");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);  
        sum+=a[i];
    }

    printf("The Average = %f",sum/(float)5);
}