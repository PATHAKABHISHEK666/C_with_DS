/*
## 2. Data Types in C
- Declare variables of all basic data types (`int`, `float`, `char`, `double`, `long`) and print their sizes using `sizeof()`.
- Write a program that takes an integer and a float as input and prints their sum.*/


/* Sol 1
//- Declare variables of all basic data types (`int`, `float`, `char`, `double`, `long`) and print their sizes using `sizeof()`.

#include <stdio.h> //Include standard input output library
void main(){
//Variable declaration 
    int number; //Integer variable
    float decimal; // Floating-point variable
    char character; // Character variable
    double double_number; //Double-precision floating-point variable
    long long_number;   // Long integer variable

    //Displaying the size of each data type
    // Use sizeof() to determine memory size allocated to each data type
    printf("The size of int is %d bytes\n",sizeof(number));
    printf("The size of float is %d bytes\n",sizeof(decimal));
    printf("The size of char is %d bytes\n",sizeof(character));
    printf("The size of double is %d bytes\n",sizeof(double_number));
    printf("The size of long is %d bytes\n",sizeof(long_number));



}*/

// - Write a program that takes an integer and a float as input and prints their sum.*/
 

#include<stdio.h> // Include standard input/output libarary
void main(){
    //Declare variables to store int and float inputs
    int num1;float num2;

    //Prompt user to enter interger 
    printf("Enter the integer number\n");
    scanf("%d",&num1);//Read integer input from user

    //Prompt user to enter floating-point number
    printf("Enter the floating number\n");
    scanf("%f",&num2);//Read float input from user

    printf("Sum = %f",num1+num2);//Displaying sum of the integer and float values
}