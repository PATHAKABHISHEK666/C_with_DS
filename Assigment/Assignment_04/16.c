// Write a program to calculate the area of four different geometrical figures, squares,  rectangles, circles, and  triangles by using functions, loops and switch statements

#include <stdio.h>
#include <conio.h>

float areaSquare(float side);
float areaRectangle(float length, float breadth);
float areaCircle(float radius);
float areaTriangle(float base, float height);

void main()
{
    int choice, i, n;
    float side, length, breadth, radius, base, height, area;

    clrscr(); 

    printf("Enter how many times you want to perform area calculation: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\n\n===== AREA CALCULATOR =====");
        printf("\n1. Square");
        printf("\n2. Rectangle");
        printf("\n3. Circle");
        printf("\n4. Triangle");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the side of the square: ");
                scanf("%f", &side);
                area = areaSquare(side);
                printf("Area of the Square = %.2f", area);
                break;

            case 2:
                printf("Enter the length and breadth of the rectangle: ");
                scanf("%f %f", &length, &breadth);
                area = areaRectangle(length, breadth);
                printf("Area of the Rectangle = %.2f", area);
                break;

            case 3:
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = areaCircle(radius);
                printf("Area of the Circle = %.2f", area);
                break;

            case 4:
                printf("Enter the base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                area = areaTriangle(base, height);
                printf("Area of the Triangle = %.2f", area);
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 4.");
        }
    }

    getch();  }

float areaSquare(float side)
{
    return side * side;
}

float areaRectangle(float length, float breadth)
{
    return length * breadth;
}

float areaCircle(float radius)
{
    return 3.14 * radius * radius;  
}

float areaTriangle(float base, float height)
{
    return 0.5 * base * height;
}
