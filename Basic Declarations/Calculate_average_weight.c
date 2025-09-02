/*Write a C program that accepts two item's weight 
and number of purchase (floating point values) and
calculates their average value.*/

#include <stdio.h>
#include <conio.h>

void main(){
    double number1,number2;
    double weight1,weight2, average;
    

    printf("Weight - Item 1:    ");
    scanf("%lf",&weight1);
    printf("No - Item 1:    ");
    scanf("%lf",&number1);
    
    printf("Weight - Item 2:    ");
    scanf("%lf",&weight2);
    printf("No - Item 2:    ");
    scanf("%lf",&number2);
    
    average = ((weight1*number1)+(weight2*number2))/(number1+number2);

    printf("Average Value = %lf",average);

    getch();


}