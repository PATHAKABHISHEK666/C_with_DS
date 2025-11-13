/**

Write a program that takes as input the numerator and denominator of the fraction.

Your program should display the numerator and denominator of fraction that represented the
product of two fractions also display the percentage of the resulting product.

*/

#include<stdio.h>

void main(){
    int a, b, c, d;
       
    int pr_num = a*c;
    int pr_den = b*d;

    float value = (float)pr_num / pr_den;
    float percentage = value * 100;
    printf("Enter the numerator and demoninator of first fraction respectively\t");
    scanf("%d %d",&a,&b);

    printf("Enter the numerator and demoninator of second fraction respectively\t");
    scanf("%d %d",&c,&d);
 
    printf("\nProduct of the two fractions = %d/%d", pr_num, pr_den);
    printf("\nPercentage equivalent = %.2f%%", percentage);

}