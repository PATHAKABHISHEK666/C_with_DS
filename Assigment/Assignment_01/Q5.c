/**

Write a C program for a company pay salary to employee ate the normally
hourly rate , if the no of hrs work doesn't exceeds 40,
the salary for excess number are calculated as 1.5 times to the normal hourly rate

So,calculate total salary



*/





#include<stdio.h>

void main(){

    float salary,work_hrs,rate;

    printf("Program to calculate the salary of an Employee!");
    
    printf("\n Please Enter The Working Hrs Of Employee  : ");
    scanf("%f",&work_hrs);

    printf("\n Please Enter The Rate per Hr  : ");
    scanf("%f",&rate);


    if(work_hrs==0||rate==0){
        salary =0;
        printf("\nWorking hours of Employee is %.2f at rate of %.2f salary is %.2f",work_hrs,rate,salary);
    }else 
    if(work_hrs<0||rate<0){
        printf("\nWorking hours or rate is neither be negative  !");
    }
  else 
     {
        if(work_hrs<=40){
        salary = work_hrs*rate;
        }else{
        salary = ((work_hrs-40)*rate*1.5)+(40*rate);
        }
        printf("\nWorking hours of Employee is %.2f at rate of %.2f salary is %.2f",work_hrs,rate,salary);
    }
}



