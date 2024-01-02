#include <stdio.h>
#include <stdlib.h>
int isPalindrome(int);

int main()
{
    int noType = isPalindrome(232);
    printf("%d\n", noType);

    return (0);
}

int isPalindrome(int x) {
    int originalNumber, reversedNo = 0, remainder = 0;
    originalNumber = x;

    while (x != 0)
    {
        remainder = x % 10;
        reversedNo = reversedNo * 10 + remainder;
        remainder /= 10;    
    }
    if (originalNumber == reversedNo)
        return (1);
    else
        return (0);
}