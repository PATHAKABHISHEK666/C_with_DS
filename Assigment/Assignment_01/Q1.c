/**

Write a c program to print a final exam report card using the printf
function. The report card should display the student's details and 
marks in different subjects in a next tubular format.

*/

#include <stdio.h>

void main(){

     printf("\n---------------------------------------------------------------------------\n");
    printf("|                            FINAL EXAM REPORT CARD                       |");
    printf("\n---------------------------------------------------------------------------\n");

    printf("Student Name : Abhishek Kumar Pathak\n");
    printf("Roll Number  : 12321\n");
    printf("Class        : 10\n");

    printf("\n---------------------------------------------------------------------------\n");
    printf("| Subject           |      Maximum Marks     |       Marks Obtained       |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("| Maths             |           100          |            50              |\n");
    printf("| Science           |           100          |            60              |\n");
    printf("| English           |           100          |            70              |\n");
    printf("| Social Studies    |           100          |            85              |\n");
    printf("| Computer Science  |           100          |            30              |\n");
    printf("\n---------------------------------------------------------------------------\n");
    printf("| Total             |           500          |             - -            |");
    printf("\n---------------------------------------------------------------------------\n");
  
    
    printf("Percentage  : 90.0%\n");
    printf("Grade       : A\n");
    printf("Result      : Pass\n");
}