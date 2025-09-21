/*
Write a program that will calculate and print bills for the city power company.
The billing rates vary depending on whether the usage is Residential, Commercial, or Industrial.

Codes:
- 'R' → Residential use
- 'C' → Commercial use
- 'I' → Industrial use
- Any other code should be treated as an error.

Rates:
1. Residential ('R'):
   - Base charge: 6 rupees
   - Plus 0.052 rupees per kWh used

2. Commercial ('C'):
   - 60 rupees for the first 1000 kWh
   - Plus 0.045 rupees for each additional kWh

3. Industrial ('I'):
   - Rates depend on time of usage:
     a) Peak hours:
        - 76 rupees for the first 1000 kWh
        - Plus 0.065 rupees for each additional kWh
     b) Off-peak hours:
        - 40 rupees for the first 1000 kWh
        - Plus 0.028 rupees for each additional kWh

Your program should prompt the user to enter:
1. An integer account number
2. The code (type of consumption)
3. The consumption figure in whole numbers of kWh
4. If the code is 'I', your program must also prompt the user 
      to enter whether the usage was during Peak hours or Off-peak hours.
*/
 


#include<stdio.h>

void main(){
    long int acc_no,c_figure;
    char is_peak,code;
    float bill;
    int not_error=1;

    printf("\nProgram to calculate the Uses bill amount :\n");
    printf("\nPlease Enter Your Account No :\n");
    scanf("%li",&acc_no);
    printf("\nPlease Enter The Type of Consumption : \n");
    printf("R -> Residential Use\n");
    printf("C -> Commercial Use\n");
    printf("I -> Industrial Use\n");
    scanf("  %c",&code);

    if (code >= 'a' && code <= 'z')
    code -= 32; 

    switch(code){
        case 'R':        
                printf("\nPlease Enter Consumption Figure in Whole number of kWh : ");
                scanf("%li",&c_figure);
                bill =  0.052*c_figure + 6;
                break;
        case 'C':
                printf("\nPlease Enter Consumption Figure in Whole number of kWh : ");
                scanf("%li",&c_figure);
                if(c_figure>=1000)
                bill = (c_figure - 1000)*0.045 + 60 ;
                else
                bill = 60;
                break;

        case 'I':
                printf("\nPlease Enter Consumption Figure in Whole number of kWh : ");
                scanf("%li",&c_figure);
                printf("\nWas the usage during Peak hours? (Y/N)\n");
                printf("\nPress 'Y' for Yes 'N' for No\n");
                scanf(" %c",&is_peak);
                    if (is_peak >= 'a' && is_peak <= 'z')
                    is_peak -= 32; 
                switch(is_peak){
                    case 'Y':
                            if(c_figure>=1000)
                            bill = (c_figure-1000)*0.065 + 76;
                            else
                            bill = 76;
                        break;
                    
                    case 'N':
                            if(c_figure>=1000)
                            bill = (c_figure-1000)*0.028 + 40;
                            else
                            bill = 40;
                        break;
                    default : printf("Error: Invalid input for Peak/Off-Peak!");
                              not_error=0;

                    break;
                }             
                break;
        default : printf("\nError: Please Enter a valid Code!\n");
                  not_error=0;

        
    }

   

    if(not_error){
    printf("\n--- Bill Details ---\n");
    printf("Account No   : %li\n", acc_no);
    printf("Type         : %c\n", code);
    printf("Consumption  : %li kWh\n", c_figure);
    printf("Total Bill   : %.2f rupees\n", bill);
    }

}