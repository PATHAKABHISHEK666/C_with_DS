/*Write a C program to compute the perimeter and area of rectangle 
with a height of 7 inches and width of 5 inches.

Expected output - 

Perimeter of the rectangle  = 24 inches
Area of the rectangle = 35 square inches

*/

#include<stdio.h>

void main(){

    int height = 7;
    int width = 5;

    printf("Perimeter of the rectangle = %d inches",2*(height+width));
printf("\n");
    printf("Area of the rectangle = %d square inches",height*width);


}