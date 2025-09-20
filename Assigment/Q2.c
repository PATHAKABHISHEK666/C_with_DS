/*
Write a C program that takes the length adn width of  a rectangular yard
and length and width of house situated in the yard.
Your program should compute the time required to cut the grass at 2sq feet per second.
*/

#include<stdio.h>
void main(){

    float len_yard,wid_yard,len_house,wid_house;
    float area_yard,area_house,area_grass;

    printf("\nProgram to Calculate the time Required to cut Grass !\n");

    printf("Enter The Length and Width of House  :  ");
    scanf("%f %f",&len_house,&wid_house);
    area_house = len_house*wid_house;
    printf("Enter The Length and Width of Yard  :  ");
    scanf("%f %f",&len_yard,&wid_yard);
    area_yard = len_yard*wid_yard;
    area_grass = area_yard - area_house;
    printf("The Area of House = %.2f \n",area_house);
    printf("The Area of Yard = %.2f \n",area_yard);
    if (area_house > area_yard) {
    printf("Error: House cannot be larger than the yard!\n");
}
else{
    printf("The Area of Grass to Be Cut = %.2f \n",area_grass);
    printf("The Time Required to Cut the Grass = %.2f seconds \n",area_grass/2);
}
}