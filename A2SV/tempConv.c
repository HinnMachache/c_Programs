#include <stdlib.h>
#include <stdio.h>

double* tempConv(double celcius);

int main(void)
{
    double* celcius = tempConv(36.50);
    for (int i = 0; i < 2; i++)
    {
        printf("%f ", celcius[i]);
    }
    free(celcius);

    //`tempConv(122.11);
    return (0);
}

double* tempConv(double celcius)
{
    double kelvin = 0.00;
    double fahrenheit = 0.00;
    int counter;
    double *tempArray;
    tempArray = malloc(2 * sizeof(double));

    kelvin = celcius + 273.15;
    fahrenheit = (celcius * 1.80) + 32.00;

    tempArray[0] = kelvin;
    tempArray[1] = fahrenheit;
    
    return (tempArray);
}