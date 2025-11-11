
/*Write a C program to check whether a blood donor is eligible to donate blood or not.
The eligibility conditions are as follows:

The donor’s age should be above 18 years and not more than 55 years.

The donor’s weight should be more than 45 kilograms.*/


#include <stdio.h>
#include <conio.h>

void main()
{
    int age;
    float weight;

    clrscr();  // Clear the screen (Turbo C specific)

    printf("Enter the age of the donor: ");
    scanf("%d", &age);

    printf("Enter the weight of the donor (in kg): ");
    scanf("%f", &weight);

    if(age > 18 && age <= 55 && weight > 45)
    {
        printf("\nThe donor is eligible to donate blood.");
    }
    else
    {
        printf("\nThe donor is not eligible to donate blood.");
        printf("\nEligibility Criteria:");
        printf("\n- Age should be above 18 and not more than 55.");
        printf("\n- Weight should be more than 45 kg.");
    }

    getch();  // Wait for keypress (Turbo C specific)
}
