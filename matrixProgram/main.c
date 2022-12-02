#include <stdio.h>
#include <stdlib.h>

int matrix(void);
int matrixTranspose(void);
int addMatrixElements(void);
int matrixAddition(void);
int matrixProduct(void);

int main(void)
{
    //matrix();
    //matrixTranspose();
    //addMatrixElements();
    //matrixAddition();
    matrixProduct();

    return (0);
}

int matrix(void)
{
    int matrix[2][3], counter1, counter2, sum = 0;

    printf("Enter Matrix elements: \n");
    for (counter1 = 0; counter1 < 2; counter1++)
    {
        for (counter2 = 0; counter2 < 3; counter2++)
        {
            scanf("%d", &matrix[counter1][counter2]);
        }
    }

    printf("\n");
    for (counter1 = 0; counter1 < 2; counter1++)
    {
        for (counter2 = 0; counter2 < 3; counter2++)
        {
            printf("%d\t", matrix[counter1][counter2]);
            sum += matrix[counter1][counter2];
        }
        printf("\n");
    }

    printf("\n");
    printf("Sum = %d", sum);

    return;
}


int matrixTranspose(void)
{
    int matrix[2][3], rowCounter, columnCounter;

    printf("Enter elements of the matrix: \n");
    for (rowCounter = 0; rowCounter < 2; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            scanf("%d", &matrix[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Matrix: \n");
    for (rowCounter = 0; rowCounter < 2; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            printf("%d\t", matrix[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Transpose of the matrix: \n");
    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 2; columnCounter++)
        {
            printf("%d\t", matrix[columnCounter][rowCounter]);
        }
        printf("\n");
    }

}


int addMatrixElements(void)
{
    int matrix[3][3], rowCounter, columnCounter, sum_Row, sum_Column;

    printf("Enter Matrix Elements: \n");

    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            scanf("%d", &matrix[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Matrix: \n");
    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            printf("%d\t", matrix[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("----------Adding Elements---------------\n");
    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        sum_Row = sum_Column = 0;
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            sum_Row += matrix[rowCounter][columnCounter];
            sum_Column += matrix[columnCounter][rowCounter];
        }
        printf("Sum_Row = %d, Sum_Column = %d\n", sum_Row, sum_Column);
    }
}


int matrixAddition(void)
{
    int matrixA[3][3], matrixB[3][3], matrixC[3][3], rowCounter, columnCounter;

    printf("Enter Matrix A Elements: \n");

    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            scanf("%d", &matrixA[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Enter Matrix B Elements: \n");

    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            scanf("%d", &matrixB[rowCounter][columnCounter]);
        }
    }


    printf("\n");
    printf("Matrix A:\n");
    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            printf("%d\t", matrixA[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Matrix B:\n");
    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            printf("%d\t", matrixB[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("--------------Adding Elements------------------\n");
    printf("Matrix C:\n");
    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            matrixC[rowCounter][columnCounter] = matrixA[rowCounter][columnCounter] + matrixB[rowCounter][columnCounter];
            printf("%d\t", matrixC[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    return;
}


int matrixProduct(void)
{
    int matrixA[3][3], matrixB[3][2], matrixC[3][2], sum, rowCounter, columnCounter, innerCounter;

    printf("Enter Matrix A Elements: \n");

    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            scanf("%d", &matrixA[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Enter Matrix B Elements: \n");

    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 2; columnCounter++)
        {
            scanf("%d", &matrixB[rowCounter][columnCounter]);
        }
    }


    printf("\n");
    printf("Matrix A:\n");
    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 3; columnCounter++)
        {
            printf("%d\t", matrixA[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Matrix B:\n");
    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 2; columnCounter++)
        {
            printf("%d\t", matrixB[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("--------------Multiplying Elements------------------\n");

    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 2; columnCounter++)
        {
            sum = 0;

            for (innerCounter = 0; innerCounter < 3; innerCounter++)
            {
                sum += ((matrixA[rowCounter][innerCounter]) * (matrixB[innerCounter][columnCounter]));
            }
                matrixC[rowCounter][columnCounter] = sum;
        }
    }

    printf("\n");
    printf("Matrix C:\n");
    for (rowCounter = 0; rowCounter < 3; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < 2; columnCounter++)
        {
            printf("%d\t", matrixC[rowCounter][columnCounter]);
        }
        printf("\n");
    }


    return;
}

