


/*
- Predict the output of the following expression: `int x = 10 + 20 * 30;`

    Explanation:
    According to operator precedence in C, multiplication (*) has higher precedence than addition (+).
    So, the expression is evaluated as:
        20 * 30 = 600
        10 + 600 = 610

    Therefore, the output is:
        x = 610
*/





/*
- Write a program to demonstrate the difference between `a + b * c` and `(a + b) * c`.


*/

#include<stdio.h> // Including header file to use standard input/output functions
 

void main(){


    int a=5,b=2,c=4; // declaring variable to evaluate the result 

    printf("\nResult of a + b * c = %d\n",a + b * c); //Printing the result in eq 1
    printf("\nResult of (a + b) * c = %d\n",(a + b) * c);//Printing the result in eq 2


    /* In the above code the result of a + b * c = 13 
        Because * have higher precedence than + so, the equation first calculate the product of b and c then add a to the result 
    */

    /* In the above code the result of (a + b) * c = 28
        Because ()- Parentheses have higher precedence than * so, the equation first calculate the sum  of a and b then multiply c to the result 
    */


}