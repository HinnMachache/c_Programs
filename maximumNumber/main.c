#include <stdio.h>
#include <stdlib.h>

int maxNumber(int num1,int num2);

int main()
{
    int num1, num2, max;

    printf("Enter two Values\n");
    scanf("%d %d", &num1, &num2);
    max = maxNumber(num1, num2);

    return 0;
}

int maxNumber(int num1, int num2)
{
    int max;

    if (num1 > num2)
    {
        printf("%d > %d", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("%d > %d", num2, num1);
    }
    else
    {
        printf("%d and %d are equal.", num1, num2);
    }

    return (max);

}
