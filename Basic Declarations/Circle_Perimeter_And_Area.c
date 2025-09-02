/*Write a C program to compute the perimeter and area of a circle 
with a given radius

Expected output:

Perimeter of the Circle = 37.680000 inches
Area of the circle = 113.040001 square inches
*/

#include <stdio.h>

void main(){

    int radius = 6;//Variable to store the radius of the circle
    float area, perimeter;//Variable to store the area and perimeter of the circle


    //Calculating the perimeter of the circle
    perimeter = 2*3.14*radius;
    printf("Perimeter of the Circle = %f inches\n",perimeter);

    //Calculating the Area of the circle

    area = 3.14*radius*radius;
    printf("Area of the circle = %f square inches\n",area);
}

