// \\Write a program to convert specified days into years,weeks and days.


#include<stdio.h>
#include<conio.h>
void main(){

    int days, years,weeks;
    printf("Enter the number of days:");
    scanf("%d",&days);
    printf("Number of days : %d\n",days);
    years = days/365;
    weeks = (days%365)/7;
    days = days - ((years*365)+(weeks*7));//Calculate remaining days

    printf("Years: %d \n",years);
    printf("Weeks: %d \n",weeks);


    printf("Days:  %d \n",(days));
    getch();

}