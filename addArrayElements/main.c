#include <stdio.h>
#include <stdlib.h>

void addArray(void);

int main()
{
    addArray();

    return 0;
}

void addArray()
{
    int counter, set1[5], set2[5], set3[5];

    printf("Enter values of the first set: \n");

    for (counter = 0; counter < 5; counter++)
    scanf("%d", &set1[counter]);

    printf("\n");
    printf("Enter values of the second set: \n");

    for (counter = 0; counter < 5; counter++)
    scanf("%d", &set2[counter]);

    printf("\n");
    for (counter = 0; counter < 5; counter++)
    {
        set3[counter] = set1[counter] + set2[counter];
        printf("Sum of element %d = %d\n", counter, set3[counter]);
    }
}
