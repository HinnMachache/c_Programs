#include <stdio.h>
#include <stdlib.h>

char printChar(void);
int product(int num1, int num2);
int sum(int num1, int num2);

int main()
{
    int num1, num2, results;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    results = sum(num1, num2);

    printf("%d + %d = %d\n", num1, num2, results);

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    results = product(num1, num2);

    printf("%d * %d = %d\n", num1, num2, results);

    return 0;
}

int product(int num1, int num2)
{
    int results;

    results = num1 * num2;

    return (results);
}

int sum(int num1, int num2)
{
    int results;

    results = num1 + num1;

    return (results);
}

char printChar()
{
    char ch;

    printf("Enter a char: ");
    scanf("%c", &ch);

    return 'c';

}
