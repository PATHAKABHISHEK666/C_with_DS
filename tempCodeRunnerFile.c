// Online C compiler to run C program online
#include <stdio.h>

void main(){

int month,day,year;
int total_days;
int feb =28;
printf("Enter Month,Day,Year in Integer  >  \n");


printf("\nEnter Month : ");
scanf("%d",&month);

printf("\nEnter Day   : ");
scanf("%d",&day);

printf("\nEnter Year   : ");
scanf("%d",&year);


if(year%4==0&&year%400==0){
    feb = 29; 
}





switch(month){
    
    case 1: total_days = day;
    break;
    case 2: total_days = 31+day;
    break;
    case 3: total_days = 31+feb+day;
    break;
    case 4: total_days = 31+feb+31+day;
    break;
    case 5: total_days = 31+feb+31+30+day;
    break;
    case 6: total_days = 31+feb+31+30+31+day;
    break;
    case 7: total_days = 31+feb+31+30+31+30+day;
    break;
    case 8: total_days = 31+feb+31+30+31+30+31+day;
    break;
    case 9: total_days = 31+feb+31+30+31+30+31+31+day;
    break;
    case 10: total_days = 31+feb+31+30+31+30+31+31+30+day;
    break;
    case 11: total_days = 31+feb+31+30+31+30+31+31+30+31+day;
    break;
    case 12: total_days = 31+feb+31+30+31+30+31+31+30+30+31+day;
    break;
    
}


printf("%d %d %d id day %d",month,year,day,total_days);
    
}