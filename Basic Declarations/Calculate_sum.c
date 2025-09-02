/* Write a C program that accepts two integers form 
   the user and calculates the sum of the two integers.*/


   #include<stdio.h>
   #include<conio.h>

   void main(){

    int a ,b ; 

    printf("Input the First Integer: ");
    scanf("%d",&a);
    printf("Input the Second Integer: ");
    scanf("%d",&b);
    printf("The Sum Of the Above two integers = %d",a+b);
    getch();
   }