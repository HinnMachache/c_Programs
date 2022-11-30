#include <stdio.h>


int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 20 && age < 30)
    {
        printf("Inside the first loop\n");
        printf("Value of a is %d.", age);
    }

    if (age > 15)
    {
        printf("\n Inside the 2nd loop");
        printf("\n Age is %d .", age);
    }
    return 0;
}
