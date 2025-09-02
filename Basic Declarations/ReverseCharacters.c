/*Write a program to print the followinng characters in reverse.

Test Characters: 'X','M','L'
Expected Output: 
The Reverse of XML is LMX

*/

#include<stdio.h>

void main(){
    char a = 'X';
    char b  = 'M';
    char c = 'L';

    printf("The Reverse of %c%c%c is %c%c%c",a,b,c,c,b,a);
}