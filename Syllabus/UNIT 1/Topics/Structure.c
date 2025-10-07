/*

## 1. Structure of a C Program
- Write a simple C program that prints "Hello, World!" and explain its structure.
- Modify the program to include comments explaining each section (header files, main function, statements).



*/

#include<stdio.h> //Preprocessor directive: Includes standard input-output library

//Main function: Every C program must have a main function
int main(){

    printf("Hello, World!");//Statement: Prints text to the screen.
    //Return statementL Ends the program and returns 0 (success)
    return 0;
}

/*

Explanation of Structure

1.Header file (#include <stdio.h>)
-> Allows use of input/output functions like printf

2.Main Function (int main())
-> Entry point of every C program;execution starts here.

3.Statement (printf("Hello, World!\n");)
-> Prints text to the screen. \n adds a new line.

4.Return Statement(return 0)
-> ends the program and tells the operating system that it ran successfully.

*/