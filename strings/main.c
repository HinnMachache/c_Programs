#include <stdio.h>
#include <stdlib.h>

int strlength(void);

int main()
{
    strlength();

    return 0;
}

int strlength()
{
    int length = 0, counter = 0;
    char name[100];

    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    printf(name);

    while (name[counter] != '\0')
    {
        length++;
        counter;
    }
    printf("Length of string = %d", length);

    return;
}
