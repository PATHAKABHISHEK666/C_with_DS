/*

In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number 
of illiterate men and women if the population of the town is 
80,000. 

*/


#include <stdio.h>
void main(){

    int numberOfMen,numberOfWomen,litrate_population,litrate_men,litrate_women;
    const int population = 80000;

    numberOfMen = (int)population*.52;
    numberOfWomen = (int)population - population*.52;
    litrate_population = (int)population*.48;
    litrate_men = (int)population*0.35;

    litrate_women = litrate_population-litrate_men;

    printf("Total Population = %d\n",population); 
    printf("-----------------------------------------------------\n");
    printf("The Number of Men = %d\n",numberOfMen);
    printf("The Number of Women = %d\n",numberOfWomen);
    printf("Total Number of Literate Population = %d\n",litrate_population);
    printf("-----------------------------------------------------\n"); 
    printf("Number of Litrate men is %d\n",litrate_men);
    printf("Number of Litrate Women is %d\n",litrate_women);
    printf("-----------------------------------------------------\n"); 
    printf("Number of Illitrate Men is %d\n",numberOfMen-litrate_men);

    printf("Number of Illitrate Women is %d\n",numberOfWomen - litrate_women);



}