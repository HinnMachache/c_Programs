#include <stdio.h>

int display(int);
int func1(int);
int func2(int);

int main(void)
{
    int n = 5;
    // display(n);
    printf("%d", func1(5));
}

int display(int num)
{
    if (num < 1)
    {
        return (0);
    }
    else
    {
        printf("%d ", num);
        display(num - 1);
        printf("%d ", num);
    }
}

int func1(int num)
{
    if (num <= 1)
        return (1);
    else
        return (num * func2(num - 1));
}

int func2(int num)
{
    if (num <= 1)
        return (1);
    else
        return (num * func1(num));
}