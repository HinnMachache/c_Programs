#include <stdio.h>

int average(int[], int);

int main()
{
    int size, avg = 0, marks[5] = {10,15,20,30,40};
    
    size = sizeof(marks)/sizeof(marks[0]);
    avg = average(marks, size);
    printf("Average of marks = %d\n", avg);

    return (0);
}

int average(int marks[], int size)
{
    int counter, sum = 0, average = 0;

    for (counter = 0; counter < size; counter++)
    {
        sum += marks[counter];
    }
    average = sum/size;
    
    return (average);
}