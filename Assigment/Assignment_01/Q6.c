/**

Write a C program to calculate commission to a salesman, totalsales as follows:

-> if sales < 1000 --> No Commission
-> if sales > 1000 && sales < 10000  --> 10% Commission
-> if sales > 10000 --> 1000 rs + 8% of sales amount greater than 10000

*/


#include <stdio.h>
void main(){
    int sales;
    float commission;


    printf("\nProgram to calculate Commission  :  \n");

    printf("\nEnter the amount of sales  :   \n");
    scanf("%d",&sales);

   if(sales>=0){
        if(sales<1000){
             commission = 0;
          }
    else if(sales>=1000&&sales<=10000){
             commission=sales*.1;
          }
    else if(sales>10000){
             commission = 1000 + (sales - 10000)*.08;
        }

    printf("\nThe Commission to sales man is %.2f Rupees",commission);

   }else printf("Sales is never be negative");


}