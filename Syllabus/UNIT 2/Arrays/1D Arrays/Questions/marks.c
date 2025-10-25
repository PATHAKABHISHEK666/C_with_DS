/*
 Write a program which store the marks of 5 students in an array
 and then print all the marks.

 The marks of students are : 75,85,80,90,95

*/


#include<stdio.h>

void main(){
    int marks[5] = {75,85,80,90,95},i;

    printf("The marks of the students are: ");
    for(i=0;i<=4;i++){
        printf("%d\n",marks[i]);
    }
}
