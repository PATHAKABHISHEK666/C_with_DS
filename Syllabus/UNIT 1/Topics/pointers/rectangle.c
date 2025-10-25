/*

📏 2. Rectangle Perimeter and Area (Dual Pointer)

Write a C program that accepts the length and width of a rectangle in meters.
Use a function calculateRectangle() that takes two pointers as input and returns area and perimeter via two separate pointer parameters.
Display both the area and perimeter formatted to two decimal places.

*/


#include<stdio.h>


void calculateRectangle(float **length,float **width,float **area,float **perimeter){

    **area = (**length)*(**width);
    **perimeter = 2*(**length+**width);

}




void main(){


    float length, width, area, perimeter; 
    float *pLen = &length, *pWid = &width, *pArea = &area, *pPeri = &perimeter;
    float **ppLen = &pLen, **ppWid = &pWid, **ppArea = &pArea, **ppPeri = &pPeri;


    printf("Please enter the length and width of rectangle!\n");
    scanf("%f %f",&length,&width);

    if(length>0&&width>0){
    calculateRectangle(ppLen,ppWid,ppArea,ppPeri);
    printf("Area of Rectangle = %.2f and Perimeter of Rectangle = %.2f ",area,perimeter);
    }
    else{

        printf("Length and Width is neither be 0 so enter a valid Length");

    }

}