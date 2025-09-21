/* 

Write a switch statement to select an operation based on the value of inventory
increment total paper by paper order if inventory is 

---> "B" or "C" : Increment Total Ribbon By Ribbon Order
---> "E" or "F" or "D" : Increment Total Label by Label Order
---> "A" or "X"  : Increment Total Paper by Paper Order 
---> "M" : Do Nothing in Inventory
---> Display an error message if the value of inventory is not one of the eight letters

*/
 
#include <stdio.h>

void main(){
    int total=0, order ;
    char opt;

    printf("\nSelect an option to increase inventory\n");

    printf("\nEnter 'B' or 'C' for ribbon :\n");
    printf("\nEnter 'E' or 'F' or 'D' for label :\n");
    printf("\nEnter 'A' or 'X' for Paper :\n");
    printf("\nEnter 'M' to Nothing in Inventory :\n");

    scanf("%c",&opt);

    switch(opt){
        case 'B':
        case 'b':
        case 'C':
        case 'c':
                printf("Enter the numbers of Ordered Ribbon\n");
                scanf("%d",&order);
                if(order>=0){
                    printf("Total no of ribbons after increment = %d ",order+total);
                }else {
                    printf("\n Order Number is never be negative or 0");
                }
                break;
        
        case  'E':
        case  'e':
        case  'F':
        case  'f':
        case  'D':
        case  'd':
                printf("\nEnter the number of ordered Labels\n");
                scanf("%d",&order);
               if(order>=0){
                    printf("Total no of Labels after increment = %d ",order+total);
                }else {
                    printf("\n Order Number is never be negative or 0");
                }
                break;
        
        case  'A':
        case  'a':
        case  'X':
        case  'x':
                printf("\nEnter the number of ordered Paper\n");
                scanf("%d",&order);
                if(order>=0){
                    printf("Total no of Paper after increment = %d ",order+total);
                }else {
                    printf("\n Order Number is never be negative or 0");
                }
                break;
        case 'M':
        case 'm':
                printf("\nDo nothing with inventory\n");
                break;

        default:printf("\nChoose a valid option!\nYour Choice is invalid!");
    }
}
