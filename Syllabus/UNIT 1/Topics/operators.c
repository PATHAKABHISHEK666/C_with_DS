/*## 4. Operators & Expressions
- Write a program to calculate `(a + b) * (c - d)` using operators.
- Demonstrate the difference between `++i` and `i++` in a program.*/




#include<stdio.h> // Including library file for standard input/output

int main(){

// - Write a program to calculate `(a + b) * (c - d)` using operators.
/*
    int a,b,c,d; // Declaring four variables to store four different numbers

    //Prompt user to print four different numbers
    printf("Enter The Four Numbers Respectively\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    // Display output after calculating in printf() function
    printf("Result of (a + b)*(c - d) = %d",(a + b)*(c - d));

    return 0; //Return statement to indicate successful execution
*/

// - Demonstrate the difference between `++i` and `i++` in a program.*/
    int i ; //Declaring variable i to store number;

    // prompt user to enter number 
    printf("Please enter the number\n");
    scanf("%d",&i);

    // Displaying the values of i on different scenarios
    printf("\n-----------------------\n");
    printf("Value of i = %d\n",i); // Printing value of i entered by user
    
    printf("Value after ++i (pre-increment) = %d\n",++i); // Printing value of i using pre-increment
    printf("Value of i = %d\n",i);// Printing value of i after increment
    printf("Value after i++ (post-increment) = %d\n",i++); // Printing value of i using post-increment
    printf("Value of i = %d\n",i);// Printing value of i after increment
    printf("\n-----------------------\n");

    /*
     In the above program we see that 
     1. when we use i++ then it increases value after using value of i 
     means that it first print value then increase it by one
     
     2. when we use ++i then it increases value before using value of i 
     means that it first increase it by one then print the value
     */

     return 0;
}

