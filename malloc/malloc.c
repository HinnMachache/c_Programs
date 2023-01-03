#include <stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2, *num2Pointer, *num1Pointer;

    num2Pointer = (int*)malloc(num2 * sizeof(int));
    num1Pointer = (int*)malloc(num1 * sizeof(int));
    printf("Enter number to find square: \n");
    scanf("%d", num1Pointer);
    *num2Pointer= *num1Pointer * (*num1Pointer);
    printf("Square is %d\n", *(num2Pointer));
    free(num2Pointer);
    free(num1Pointer);
    }