#include <stdio.h>
#include <stdlib.h>

int arrayFun(void);
void max_min(void);
int reallocFun(void);

int main()
{
    int sum = 0;
    float average;

    // sum = arrayFun();
    // average = (float)sum / 10;
    // printf("Sum of ages = %d.\n", sum);
    // printf("Average of ages = %.2f\n", average);
    // max_min();
    reallocFun();

    return 0;
}

int arrayFun(void)
{
    int age, noAges, counter, sum = 0, even = 0, odd = 0, max = 0, min = 0;
    int *agePointer;

    /*
    for (counter = 0; counter < 10; counter++) //Getting the ages
    {
        printf("Enter age: ");
        scanf("%d", &ages[counter]);
    }
    */

    printf("Enter number of ages to be inserted:");
    scanf("%d", &noAges);
    agePointer = (int *)calloc(noAges, sizeof(int)); // Memory Allocation
    if (agePointer == NULL)
    {
        printf("Memory Not allocated!");
        exit(0);
    }
    else
    {
        for (counter = 0; counter < noAges; counter++) // Getting the ages
        {
            printf("Enter the age: ");
            scanf("%d", (agePointer + counter));
        }
    }

    printf("\n");

    /*
    for (counter = 0; counter < 10; counter++)//Print from first age to last age
    {
        printf("Age %d:-> %d.\n", counter, ages[counter]);
    }*/

    for (counter = 0; counter < noAges; counter++) // Print from first age to last age
    {
        printf("Age %d:-> %d.\n", counter, *(agePointer + counter));
    }

    printf("\n");

    /*
    for (counter = 9; counter >= 0; counter--)//Print from last age to first age
    {
        printf("Age %d:-> %d.\n", counter, ages[counter]);
    }*/

    printf("\n");

    for (counter = 0; counter < noAges; counter++) // Finding the sum of ages
    {
        sum += *(agePointer + counter);
    }

    max = min = *(agePointer + 0);
    for (counter = 0; counter < noAges; counter++) // Finding the even age
    {
        if (*(agePointer + counter) % 2 == 0)
        {
            printf("Age %d is even\n", *(agePointer + counter));
            even += 1;
        }

        else // Finding the odd age
        {
            printf("Age %d is odd\n", *(agePointer + counter));
            odd += 1;
        }

        if (*(agePointer + counter) > max) // Finding the greatest age
        {
            max = *(agePointer + counter);
        }

        if (*(agePointer + counter) < min) // Finding the minimum age
        {
            min = *(agePointer + counter);
        }
    }

    printf("\n");
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);
    printf("\n");
    printf("Minimum age = %d\n", min);
    printf("Maximum age = %d\n", max);

    printf("\n");
    free(agePointer);

    return (sum);
}

void max_min(void)
{
    int max, min, counter, *numberPointer, noElements;

    printf("Enter number of elements to be inserted: ");
    scanf("%d", &noElements);
    numberPointer = (int *)calloc(noElements, sizeof(int));

    if (numberPointer == NULL)
    {
        printf("Memory not allocated!");
    }
    else
    {
        for (counter = 0; counter < noElements; counter++)
        {
            printf("Enter a value: ");
            scanf("%d", (numberPointer + counter));
        }

        max = min = *(numberPointer + 0);

        for (counter = 0; counter < noElements; counter++)
        {
            if (*(numberPointer + counter) < min)
            {
                min = *(numberPointer + counter);
            }

            if (*(numberPointer + counter) > max)
            {
                max = *(numberPointer + counter);
            }
        }

        printf("\nLowest value = %d\n", min);
        printf("Highest value = %d\n", max);
    }

    free(numberPointer);
    printf("Memory successfully deallocated!");
    printf("\n");
}

int reallocFun(void)
{
    int *agePointer, counter = 0, ans = 0, noAges, no2Ages = 0;

    printf("Enter number of ages to be inserted: ");
    scanf("%d", &noAges);
    agePointer = (int *)calloc(noAges, sizeof(int)); // Memory Allocation
    if (agePointer == NULL)
    {
        printf("Memory Not allocated!");
        exit(0);
    }
    else
    {
        while (counter < noAges)
        {
            printf("Enter age: ");
            scanf("%d", (agePointer + counter));
            counter++;
        }
    }

    printf("\nWould you like to add more ages(1. For Yes) (2. For No): ");
    scanf("%d", &ans);

    if (ans == 1)
    {
        printf("Enter number of ages to be added: ");
        scanf("%d", &no2Ages);
        agePointer = realloc(agePointer, no2Ages * sizeof(int));

        if (agePointer == NULL)
        {
            printf("Memory Not allocated!");
            exit(0);
        }
        else
        {
            counter = 0;
            while (counter < no2Ages)
            {
                printf("Enter age: ");
                scanf("%d", (agePointer + counter));
                counter++;
            }
        }
    }
    else
    {
        printf("\nExiting the program!\n");
    }

    for (counter = 0; counter < (noAges + no2Ages); counter++) // Print from first age to last age
    {
        printf("Age %d:-> %d.\n", counter, *(agePointer + counter));
    }

    free(agePointer);
    printf("\n");
}