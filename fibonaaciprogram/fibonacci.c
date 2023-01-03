#include<stdio.h>
#include<stdlib.h>

int fibonacci(void);
int elementsInput(void);
int fibonacciWithRecursion(int);

int elements, num1 = 0, num2 = 1;

int main(void)
{
    //fibonacci();
    elementsInput();
    fibonacciWithRecursion(elements - 2);

    return(0);
}

int elementsInput(void)
{
    
    printf("Enter number of elements to be displayed: ");
    scanf("%d", &elements);
    //system("cls");
    printf("%d %d ", num1, num2);

    return (0);
}

int fibonacci(void)
{
    int num3, counter;

    elementsInput();
    
    for (counter = 2; counter < elements; counter++)
    {
        num3 = num2 + num1;
        printf(" %d", num3);
        num1 = num2;
        num2 = num3;
    }
    printf("\n");

    return (0);
}

int fibonacciWithRecursion(int elements)
{
    static int number1 = 0, number2 = 1, num3;


    if (elements > 0)
    {
        num3 = number1 + number2;
        number1 = number2;
        number2 = num3;
        printf("%d ", num3);
        fibonacciWithRecursion(elements - 1);
    }
    

    return (0);
   
}