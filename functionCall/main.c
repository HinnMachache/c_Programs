#include <stdio.h>
#include <stdlib.h>

void func1(int * , int *);

int main()
{
    int num1 = 10, num2 = 20;

    printf("Before function call:\n");
    printf("num1 = %d , num2 = %d\n", num1, num2);

    func1(&num1, &num2);
    printf("After function call:\n");
    printf("Num1 = %d , Num2 = %d\n", num1, num2);

    return 0;
}

void func1(int *num1, int *num2)
{
    (*num1) += 10;
    (*num2) += 20;
    //printf("num = %d\n", num);
}
