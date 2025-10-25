/*
🧮 1. Temperature Conversion (Call by Reference)

Write a C program to convert temperature from Celsius to Fahrenheit and Kelvin using a call-by-reference function named convertTemp().
Accept temperature in Celsius as input.
Use pointers to return both Fahrenheit and Kelvin values.
Display the results with two decimal precision.

*/

#include<stdio.h>

void convertTemp(float *celsius,float *fahrenheit,float *kelvin){

        *fahrenheit = (*celsius*1.8) + 32;
        *kelvin = *celsius+273.15;


}



int main(){

    float celsius,fahrenheit,kelvin;
    printf("Program to convert from Celsius to Fahrenheit and Kelvin\n");

    printf("Enter the temperature in Celsius  ");
    scanf("%f",&celsius);

    convertTemp(&celsius,&fahrenheit,&kelvin);

    printf("%.2f deg Celsius - %.2f deg Fahrenheit and %.2f deg Kelvin ",celsius,fahrenheit,kelvin );



    return 0;
}
