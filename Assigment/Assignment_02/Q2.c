/*
write a c program to check whether the donor is eligible or not for donating blood conditions are: 
1. Age should be above 18 but not more than 55 
2. Weights should be more than 45kg 
*/ 

#include<stdio.h>

void main(){
    int age,weight;

    printf("\nHello!\n");
    printf("\nPlease Enter your age:");
    scanf("%d",&age);
    printf("\nPlease Enter your weight:");
    scanf("%d",&weight);


    if(age>18&&age<=55&&weight>45){
        printf("You'r eligible to donate your blood");
    }else {
        printf("You'r not eligible to donate your blood!");
    }
}