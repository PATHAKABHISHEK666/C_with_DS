// - Write a program using at least 5 C keywords correctly.

#include<stdio.h>//Including library file for standard input/output

int main(){


    int number; //Declaring variable to store number
    char ch = 'x';//Declaring character to store character

    // prompt user to enter character and number
    printf("Enter Your Number and Character\n");
    scanf("%d %c",&number,&ch);

    // Displaying the entered number and character by the user
    printf("\n------------------------------------------------\n");
    printf("You Entered Number - %d and You Entered Character - %c",number,ch);
    printf("\n------------------------------------------------\n");
    
    return 0;


}