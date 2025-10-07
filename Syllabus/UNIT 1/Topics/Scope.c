


// ## 9. Scope of Variables
// - Write a program to demonstrate the use of global and local variables with the same name.
// - Write a program that shows block-level scope using `{}`.




#include <stdio.h> // Include standard input/output header

int variable = 10; // Global variable

void showValue() {
    // Accessing global variable inside a function
    printf("Global variable inside showValue(): %d\n", variable);
}

int main() {
    int variable = 14; // Local variable in main(), shadows global variable
    printf("Local variable in main(): %d\n", variable);

    showValue(); // Calls function that prints global variable

    {
        int variable = 200; // Block-level variable, shadows local and global
        printf("Block-level variable inside {}: %d\n", variable);
    }

    // After block, local variable is still in effect
    printf("Local variable after block in main(): %d\n", variable);

    return 0;
}