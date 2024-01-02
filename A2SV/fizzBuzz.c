#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** fizzBuzz(int, int*);
/**
 * main - FizzBuzz Code
 * @n: Number Variable
 */
char** fizzBuzz(int n, int* returnSize)
{
	int counter, index = 0;
	char **resultArray;
	*returnSize = n;
	resultArray = malloc(n * sizeof(char*));

	if (resultArray == NULL)
		printf("Memory Allocation Error!");
	for (counter = 1; counter <= n; counter++)
	{
		if ((counter % 3 == 0) && (counter & 5 == 0))
		{
			/* printf("FizzBuzz "); */
			resultArray[index] = strdup("FizzBuzz");
		}
		else if ((counter % 3) == 0)
		{
			/*printf("Fizz ");*/
			resultArray[index] = strdup("Fizz");
		}
		else if((counter % 5) == 0)
		{
			/*printf("Buzz ");*/
			resultArray[index] = strdup("Buzz");
		}
		else
		{
			/*printf("%d ", counter);*/
			char number[20];
            sprintf(number, "%d", counter);
			resultArray[index] = strdup(number);
		}
		index++;
	}
	return (resultArray);
}

