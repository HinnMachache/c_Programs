#include <stdio.h>
int selfDividingNumber(int, int);

int main()
{
    selfDividingNumber(2, 9);
    
}

int selfDividingNumber(int left, int right)
{
    int digit;
    int num;

    num = left;
    for (left; left <= right; left++)
    {
        if (num >= 10 && num % 10 == 0) {
        return 0;
    }
        while (num != 0)
        {
            digit = num % 10;
            if (digit == 0)
                return (0);
            printf("%d ", num);
            num /= 10;
        }
    }
    printf("\n");
}