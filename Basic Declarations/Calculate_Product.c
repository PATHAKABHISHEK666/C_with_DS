/*Write a C program that accepts two integers from 
the user and calculates the product of the two integers*/

#include<stdio.h>
   #include<conio.h>

   void main(){

    int a ,b ; 

    printf("Input the First Integer: ");
    scanf("%d",&a);
    printf("Input the Second Integer: ");
    scanf("%d",&b);
    printf("The Product Of the Above two integers = %d",a*b);
    getch();
   }