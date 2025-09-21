/*

A telephone company has the following structure for long
distance call : 

-> The regular rate for a call is --> 0.4 per minutes

-> Any call started after 6pm (1800) but before 8am (0800) 
   is discounted 50%

-> Any call longer than 60 minutes recieve a 15% discount

-> All calls are subject to 4% federal tax on the cost after
   any discount


write a program that takes start time and end time for a call
based on 24hrs clock and the length of the call in minutes 
the gross cost should be display by the net cost (after discount
are deducted tax are added)


*/

#include<stdio.h>

int main(){

    const float regular_rate = 0.4;
    float gross_cost,net_cost=0;
    int s_time,e_time,length,sh,sm,eh,em;
    int start_min,end_min;
    printf("\nProgram to calculate the Net Cost of Telephone Bill !\n");

    printf("\nPlease Starting And Ending Time Respectively in based on 24hrs clock:\n");
    scanf("%d %d",&s_time,&e_time);
    
        
    sh = s_time/100,sm = s_time%100;
    eh = e_time/100,em = e_time%100;
    
    
    start_min = sh*60+sm;
    end_min = eh*60+em;
    
    if(end_min<start_min){
        end_min +=24*60;
    }
  
   length= end_min-start_min;
    
    gross_cost = length*.4;
    

if ((s_time >= 1800 && s_time <= 2359) || (s_time >= 0 && s_time < 800)) {
    net_cost = gross_cost*.5;

     if(length>60){
             net_cost = net_cost - net_cost*.15;
      }
    
}else 
{
net_cost = gross_cost;
   if(length>60){
             net_cost = net_cost - net_cost*.15;
      }
}
    net_cost += net_cost*.04; 

    printf("The Length Of call = %d Minutes\n",length);
    printf("\nGross Cost = %.2f\n",gross_cost);
    printf("\nNet Cost = %.2f\n",net_cost);
return 0;


}