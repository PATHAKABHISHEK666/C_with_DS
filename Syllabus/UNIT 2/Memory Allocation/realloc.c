    /*
    Write a C program that performs the following:
    - Ask the user for the initial number of students.
    - Use malloc to allocate memory for storing their marks.
    - Let the user input marks for each student.
    - Ask if they want to add more students. If yes:
    - Get the new total number of students.
    - Use realloc to resize the memory block.
    - Input marks for the newly added students.
    - Display the marks of all students.
    Requirements:
    - Use dynamic memory allocation (malloc and realloc) appropriately.
    - Free the allocated memory at the end.
    - Validate user inputs.
    - Include comments to explain your code.



    */

   #include <stdio.h>
#include <stdlib.h>

int main() {
    int i, initial_n, total_n, *marks;
    char opt;

    // Prompt the user to enter number of students
    printf("Enter the number of students: ");
    if (scanf("%d", &initial_n) != 1 || initial_n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    // Allocate memory for marks
    marks = (int*)malloc(initial_n * sizeof(int));
    if (marks == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input marks for initial students
    for (i = 0; i < initial_n; i++) {
        printf("Marks of student %d: ", i + 1);
        if (scanf("%d", &marks[i]) != 1) {
            printf("Invalid input.\n");
            free(marks);
            return 1;
        }
    }

    // Ask if user wants to add more students
    printf("Do you want to add more students? (Y/N): ");
    scanf(" %c", &opt);

    if (opt == 'y' || opt == 'Y') {
        printf("Enter the total number of students: ");
        if (scanf("%d", &total_n) != 1 || total_n <= initial_n) {
            printf("Invalid number of students.\n");
            free(marks);
            return 1;
        }

        // Reallocate memory
        int* temp = (int*)realloc(marks, total_n * sizeof(int));
        if (temp == NULL) {
            printf("Memory reallocation failed.\n");
            free(marks);
            return 1;
        }
        marks = temp;

        // Input marks for new students
        for (i = initial_n; i < total_n; i++) {
            printf("Marks of student %d: ", i + 1);
            if (scanf("%d", &marks[i]) != 1) {
                printf("Invalid input.\n");
                free(marks);
                return 1;
            }
        }
    } else {
        total_n = initial_n;  // If no new students, total = initial
    }

    // Display all marks
    printf("\nMarks of all students:\n");
    for (i = 0; i < total_n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    // Free allocated memory
    free(marks);

    return 0;
}
