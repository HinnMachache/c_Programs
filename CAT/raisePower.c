#include <math.h>
#include <stdio.h>

float raise_Power(float, float);

int main()
{
    float x = 3.0, y, n = 2.0;
    y = raise_Power(x, n);
    printf("Y = %.2f", y);

    return (0);
}

float raise_Power(float num1, float num2)
{
    float y;
    y = pow(num1, num2);

    return (y);
}