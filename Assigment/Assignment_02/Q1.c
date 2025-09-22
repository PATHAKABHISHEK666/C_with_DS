// 1. Write a c program to find out whether the character presses through the keyboard is a digit or not. 

#include <stdio.h>

void main(){
  
    char character;
   
    printf("Program to find out entered character is digit or not!\n");
    scanf(" %c",&character);
        if(character>='0'&&character<='9'){
            printf("\nThe Character pressed through keyboard is Digit.");
        }
        else{
            printf("\nThe Character pressed through keyboard is Not Digit");

        }
}