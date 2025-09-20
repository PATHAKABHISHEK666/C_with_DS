/**

Write a program to compute the rate of growth expressed as a percentage of population
take as input as initial size of population, and its size one week later, then predict the size of the population 
in next another week, assuming that growth continues at the same rate.

*/

#include<stdio.h>

void main(){


    int init_popu,later_popu;
    float popu_differ;


    printf("Enter the Initial and one Week Later Population\n");
    scanf("%d %d",&init_popu,&later_popu);

    popu_differ = ((later_popu/init_popu)*100)-100;

    printf("The Rate Growth : %.2f %%",popu_differ);

    printf("The Population Growth on another week with %.2f %% growth rate is %.2f", popu_differ,later_popu+(later_popu*popu_differ/100));


}