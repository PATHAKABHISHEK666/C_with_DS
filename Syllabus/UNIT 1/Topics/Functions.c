/*

## 12. Functions – Defining and Accessing
- Write a function to add two numbers and call it from `main()`.
- Write a function that returns the maximum of two numbers.

*/


#include<stdio.h>//Include library file for input/output function

int addTwoNumbers(int a, int b);
int maxOfTwoNumbers(int a, int b);

int main (){
    int num1,num2;//Declare variables to store input numbers
    int sum,max;
    //Prompt user to enter the two numbers
    printf("\nEnter two numbers to add\n");
    scanf("%d %d",&num1,&num2);
    sum = addTwoNumbers(num1,num2);//Getting sum of two numbers as return from addTwoNumbers function and assign to sum variable
    max = maxOfTwoNumbers(num1,num2);//Getting maximum of two numbers as return from maxOfTwoNumbers function and assign to max variable
    printf("\nThe Sum of %d and %d is %d\n",num1,num2,sum);//Printing output sum of two entered numbers
    printf("\nThe Max of %d and %d is %d\n",num1,num2,max);//Printing output max of two entered numbers
    return 0 ;
}

//Function Definition to add two numbers and max between two numbers

int addTwoNumbers(int a,int b){
    return a+b;//returns the sum of two integers
}

int maxOfTwoNumbers(int a,int b){
    return a>b?a:b;//returns max of two integers
}