#include <stdio.h>
#include <stdlib.h>

int arrayFun(void);
void max_min(void);

int main()
{
    int sum = 0;
    float average;

    sum = arrayFun();
    average =(float) sum / 10;
    printf("Sum of ages = %d.\n", sum);
    printf("Average of ages = %.2f\n", average);
    //max_min();

    return 0;
}

int arrayFun(void)
{
    int ages[10], counter, sum = 0, even = 0, odd = 0, max = 0, min = 0;

    for (counter = 0; counter < 10; counter++)
    {
        printf("Enter age: ");
        scanf("%d", &ages[counter]);
    }

    printf("\n");

    for (counter = 0; counter < 10; counter++)
    {
        printf("Age %d:-> %d.\n", counter, ages[counter]);
    }

    printf("\n");

    for (counter = 9; counter >= 0; counter--)
    {
        printf("Age %d:-> %d.\n", counter, ages[counter]);
    }

    printf("\n");

    for (counter = 0; counter < 10; counter++)
    {
        sum += ages[counter];
    }

    max = min = ages[0];
    for (counter = 0; counter < 10; counter++)
    {
        if (ages[counter] % 2 == 0)
        {
        printf("Age %d is even\n", ages[counter]);
        even +=1;
        }

        else
        {
        printf("Age %d is odd\n", ages[counter]);
        odd += 1;
        }

        if (ages[counter] > max)
        {
            max = ages[counter];
        }

        if (ages[counter] < min)
        {
            min = ages[counter];
        }

    }

    printf("\n");
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);
    printf("\n");
    printf("Minimum age = %d\n", min);
    printf("Maximum age = %d\n", max);

    printf("\n");

    return (sum);
}

void max_min()
{
    int max, min, counter, numbers[10];

    for (counter = 0; counter < 10; counter++)
    {
        printf("Enter a value: ");
        scanf("%d", &numbers[counter]);
    }

    max = min = numbers[0];

    for (counter = 0; counter < 10; counter++)
    {
        if (numbers[counter] < min)
        {
            min = numbers[counter];
        }

        if (numbers[counter] > max)
        {
            max = numbers[counter];
        }
    }

    printf("\nLowest value = %d\n", min);
    printf("Highest value = %d\n", max);
}
