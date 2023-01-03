#include<stdio.h>

int primeNumbers(int);
int inputDetails(void);

int main(void)
{
    int number;

    number = inputDetails();
    primeNumbers(number);

    return (0);
}

int inputDetails(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    return (number);
}

int primeNumbers(int digit)
{
    int half, counter, flag = 0;

    half = digit / 2;
    for (counter = 2; counter <  half; counter++)
    {
        if (digit / half == 0)
        {
            printf("Number: %d, is not prime number!\n", digit);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Number: %d, is prime number", digit);
    }

    printf("\n");
    return (0);
}