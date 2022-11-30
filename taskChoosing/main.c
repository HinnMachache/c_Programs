#include <stdio.h>
#include <stdlib.h>

int sum(int num1, int num2);
int product(int num1, int num2);

int main()
{
    int num1, num2, result, task = 1;

    while (task == 1)
    {
        printf("----------------MENU-----------------\n");
        printf("1: Calculate Sum\n");
        printf("2: Calculate Product\n");
        printf("3: Exit Program\n");
        printf("Enter a choice to continue: ");
        scanf("%d", &task);

        switch(task)
        {
            case 1: {
                        printf("Calculating Sum....\n");
                        printf("Enter First Value: ");
                        scanf("%d", &num1);
                        printf("Enter second Value: ");
                        scanf("%d", &num2);
                        result = sum(num1, num2);
                        printf("Sum of: %d + %d = %d\n", num1, num2, result);
                        break;
                    }

            case 2: {
                        printf("Calculating Product....\n");
                        printf("Enter First Value: ");
                        scanf("%d", &num1);
                        printf("Enter second Value: ");
                        scanf("%d", &num2);
                        result = product(num1, num2);
                        printf("Product of: %d * %d = %d\n", num1, num2, result);
                        break;
                    }

            case 3: {
                    printf("Exiting the program....\n");
                    break;
                    }

            default:
                    {
                        printf("Invalid choice made");
                        break;
                    }
        }
    }

    return 0;
}

int sum(int num1, int num2)
{
    int result;

    result = num1 + num2;

    return result;
}

int product(int num1, int num2)
{
    int result;

    result = num1 * num2;

    return result;
}
