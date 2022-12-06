#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int rectangleDetails(void);
int areaRectangle(void);
int perimeterRectangle(void);
int diagonalRectangle(void);

float length, width;

int main()
{
    int task;

    printf("-------------MENU-----------------\n");
    printf("1: Input Details of Rectangle.\n");
    printf("2: Find area of Rectangle.\n");
    printf("3: Find perimeter of Rectangle.\n");
    printf("4: Find Diagonal of Rectangle.\n");
    printf("5: Exit the Program.\n");
    printf("\nChoose a task to continue: ");
    scanf("%d", &task);

    if (task == 1)
    {
        rectangleDetails();
    }
    else if (task == 2)
    {
        areaRectangle();
    }
    else if (task == 3)
    {
        perimeterRectangle();
    }
    else if (task == 4)
    {
        diagonalRectangle();
    }
    else if (task == 5)
    {
    }
    else
    {
        printf("Invalid choice.\n");
    }


    return 0;
}

int rectangleDetails(void)
{
    printf("\nEnter Length of rectangle: ");
    scanf("%f", &length);
    printf("Enter Width of rectangle: ");
    scanf("%f", &width);
    printf("\nLength = %.2f Width = %.2f\n", length, width);

    return;
}

int areaRectangle(void)
{
    float area;
    rectangleDetails();
    area = width * length;
    printf("Area = %.2f", area);

    return;
}

int perimeterRectangle(void)
{
    float perimeter;
    rectangleDetails();
    perimeter = 2 * (width + length);
    printf("Perimeter = %.2f", perimeter);

    return;
}

int diagonalRectangle(void)
{
    float diagonal, sides;
    rectangleDetails();
    sides = (length*length) + (width * width);
    diagonal = sqrt(sides);

    printf("Diagonal = %.2f", diagonal);

    return;
}
