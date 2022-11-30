#include <stdio.h>
#include <stdlib.h>

void eligible_Or_Not(int n);
int factorial(int number);

int main()
{
    int number;
    /*
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    eligible_Or_Not(age);
    */


    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial only available for values greater than 0\n");
        return;
    }

    printf("%d! = %d", number, factorial(number));

    return (0);
}

void eligible_Or_Not(int n)
{
    if (n >= 18)
    {
        printf("You're ready to vote\n");
        return;
    }
    else if (n == 17)
    {
        printf("Try next year!\n");
        return;
    }
    else
    {
        printf("You are not ready!\n");
        return;
    }
}


int factorial(int number)
{
    int counter, results = 1;

    if (number == 0)
    {
        return (1);
    }

    for (counter = number; counter > 0; counter--)
    {
        results = results * counter;
    }

    return (results);
}
