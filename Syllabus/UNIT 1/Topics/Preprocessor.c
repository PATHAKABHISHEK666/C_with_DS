/*## 5. Preprocessor Directives
- Write a program using `#define` to define a constant `PI` and calculate the area of a circle.
- Create a program that includes a header file and uses a function from it.*/


#include<stdio.h> // Including libarary file for standard input/ouput 
#include <math.h> // Inclusing Math Libarary file to use use pow() function
#define PI 3.14159 //Defining const PI using #define (no '=' or ';')

int main(){

    //Declaring variables to store radius and area of circle    
    int  radius;
    double area;    // Use double for more accurate area calculation

    // Prompt user to enter the radius of the circle
    printf("Enter the radius of Circle\n");
    scanf("%d",&radius);\

    // Calculating area of the circle using formula: PI * r^2
    area = PI*pow(radius,2);
    printf("\n-------------------\n");
    printf("The Area of circle is : %.2f",area);//%.2f for formatted float output

    return 0;

}