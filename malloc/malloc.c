#include <stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2, sum = 0, *mallocPointer;

    mallocPointer = (int*)malloc(num1 * sizeof(int));
    printf("Enter number to find square: \n");
    scanf("%d",mallocPointer);
    num2 = num1 * num1;
    printf("Square is %d\n", num2);
    free(mallocPointer);
    }