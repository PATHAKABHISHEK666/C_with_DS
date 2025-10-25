/*

Question:
Write a C program to calculate the total fees for a painter to paint a wall at a rate of ₹5 per cm².

The length and width of the wall should be entered by the user in meters.
Use a call-by-reference function named feesCalculator() to calculate the total fees.

The program should:

Accept the length and width as input.

Convert the dimensions from meters to centimeters.

Compute the total painting fees using the formula:

fees = (length in cm × width in cm)×5

Display the wall area (in m²) and the total fees.

Display an appropriate message if invalid (zero or negative) values are entered.



*/











#include<stdio.h>

float feesCalculator(float *length,float *width){
    return ((*length*100)*(*width*100))/5;
}


void main(){
    float length,width,fees;
    printf("Program to Calculate Fees of Painter");
    printf("Enter Length and Width of Wall\t");
    scanf("%f %f",&length,&width);
    if(length>0&&width>0)
    {
        fees = feesCalculator(&length,&width);
        printf("Total fees of Painter The Wall of area %.2fm square is %.2f",(length*width),fees);
    }
    else{
        printf("Length Or Width is neither be negative so enter a valid positive number");
    }
}