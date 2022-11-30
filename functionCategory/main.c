#include <stdio.h>
#include <stdlib.h>

void sum(void);
void subtract(void);
void product(void);
void division(void);

void main(void)
{
    int option, run = 1;

    printf("-------------------MENU------------------\n");
    printf("1: Add\n");
    printf("2: Subtract\n");
    printf("3: Product\n");
    printf("4: Divion\n");
    printf("5: Exit\n");
    printf("Enter an option to continue:\n");
    scanf("%d", &option);


    switch(option)
    {
        case 1: {
                sum();
                break;
                }

        case 2: {
                subtract();
                break;
                }

        case 3: {
                product();
                break;
                }

        case 4: {
                division();
                break;
                }

        case 5: {
                printf("Exiting the Program...\n");
                break;
                }

        default:{
            printf("Invalid Option.\n");
            printf("Try Again.\n");
                }
    }
    }


void sum(void)
{
    int num1, num2, sum = 0;
    printf("Enter two numbers to add: \n");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
}

void product(void)
{
    int num1, num2, result = 0;
    printf("Enter two numbers to multiply: \n");
    scanf("%d %d", &num1, &num2);

    result = num1 * num2;
    printf("%d * %d = %d", num1, num2, result);
}

void division(void)
{
    int num1, num2;
    float result = 0;
    printf("Enter A bigger number and a small number respectively: \n");
    scanf("%d %d", &num1, &num2);

    result = (float) num1 / num2;
    printf("%d / %d = %.2f", num1, num2, result);
}

void subtract(void)
{
    int num1, num2, difference = 0;
    printf("Enter a bigger number and a smaller number respectively: \n");
    scanf("%d %d", &num1, &num2);

    difference = num1 - num2;
    printf("%d - %d = %d", num1, num2, difference);
}
