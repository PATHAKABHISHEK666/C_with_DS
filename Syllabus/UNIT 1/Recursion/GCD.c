#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0)
        return num1;
    return gcd(num2, num1 % num2);
}

int main() {
    int num1, num2;

    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 && num2 == 0)
        printf("GCD of 0 and 0 is undefined.\n");
    else
        printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
