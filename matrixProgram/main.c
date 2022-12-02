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
    #define Size 100
    int matrix[Size][Size], row, column, rowCounter, columnCounter, sum = 0;

    printf("Enter row size: ");
    scanf("%d", &row);
    printf("Enter column size: ");
    scanf("%d", &column);
    printf("Enter Matrix elements: \n");
    for (rowCounter = 0; rowCounter < row; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column; columnCounter++)
        {
            scanf("%d", &matrix[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Matrix:\n");
    for (rowCounter = 0; rowCounter < row; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column; columnCounter++)
        {
            printf("%d\t", matrix[rowCounter][columnCounter]);
            sum += matrix[rowCounter][columnCounter];
        }
        printf("\n");
    }

    printf("\n");
    printf("Sum = %d", sum);

    return;
}


int matrixTranspose(void)
{
    #define Size 100
    int matrix[Size][Size], row, column, rowCounter, columnCounter;

    printf("Enter row size: ");
    scanf("%d", &row);
    printf("Enter column size: ");
    scanf("%d", &column);
    printf("Enter elements of the matrix: \n");
    for (rowCounter = 0; rowCounter < row; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column; columnCounter++)
        {
            scanf("%d", &matrix[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Matrix: \n");
    for (rowCounter = 0; rowCounter < row; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column; columnCounter++)
        {
            printf("%d\t", matrix[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Transpose of the matrix: \n");
    for (rowCounter = 0; rowCounter < column; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < row; columnCounter++)
        {
            printf("%d\t", matrix[columnCounter][rowCounter]);
        }
        printf("\n");
    }

}


int addMatrixElements(void)
{
    #define Size 100
    int row, column, matrix[Size][Size], rowCounter, columnCounter, sum_Row, sum_Column;


    printf("Enter row size: ");
    scanf("%d", &row);
    printf("Enter column size: ");
    scanf("%d", &column);
    printf("Enter Matrix Elements: \n");

    for (rowCounter = 0; rowCounter < row; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column; columnCounter++)
        {
            scanf("%d", &matrix[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Matrix: \n");
    for (rowCounter = 0; rowCounter < row; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column; columnCounter++)
        {
            printf("%d\t", matrix[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("----------Adding Elements---------------\n");
    for (rowCounter = 0; rowCounter < row; rowCounter++)
    {
        sum_Row = sum_Column = 0;
        for (columnCounter = 0; columnCounter < column; columnCounter++)
        {
            sum_Row += matrix[rowCounter][columnCounter];
            sum_Column += matrix[columnCounter][rowCounter];
        }
        printf("Sum_Row = %d, Sum_Column = %d\n", sum_Row, sum_Column);
    }
}


int matrixAddition(void)
{
    #define Size 100
    int matrixA[Size][Size], matrixB[Size][Size], matrixC[Size][Size], row1, column1, row2, column2, rowCounter, columnCounter;

    printf("Enter row size: ");
    scanf("%d", &row1);
    printf("Enter column size: ");
    scanf("%d", &column1);
    printf("Enter Matrix A Elements: \n");

    for (rowCounter = 0; rowCounter < row1; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column1; columnCounter++)
        {
            scanf("%d", &matrixA[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Enter row size: ");
    scanf("%d", &row2);
    printf("Enter column size: ");
    scanf("%d", &column2);
    printf("Enter Matrix B Elements: \n");

    for (rowCounter = 0; rowCounter < row2; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column2; columnCounter++)
        {
            scanf("%d", &matrixB[rowCounter][columnCounter]);
        }
    }


    printf("\n");
    printf("Matrix A:\n");
    for (rowCounter = 0; rowCounter < row1; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column1; columnCounter++)
        {
            printf("%d\t", matrixA[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Matrix B:\n");
    for (rowCounter = 0; rowCounter < row2; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < column2; columnCounter++)
        {
            printf("%d\t", matrixB[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("--------------Adding Elements------------------\n");
    printf("Matrix C:\n");
    for (rowCounter = 0; rowCounter < (row1+row2); rowCounter++)
    {
        for (columnCounter = 0; columnCounter < (column1+column2); columnCounter++)
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
    #define Size 50
    int matrixA[Size][Size], matrixB[Size][Size], matrixC[Size][Size], rowA, columnA, rowB, columnB, sum, rowCounter, columnCounter, innerCounter;

    printf("Enter row size: ");
    scanf("%d", &rowA);
    printf("Enter column size: ");
    scanf("%d", &columnA);
    printf("Enter Matrix A Elements: \n");

    for (rowCounter = 0; rowCounter < rowA; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < columnA; columnCounter++)
        {
            scanf("%d", &matrixA[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Matrix A:\n");
    for (rowCounter = 0; rowCounter < rowA; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < columnA; columnCounter++)
        {
            printf("%d\t", matrixA[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Enter row size: ");
    scanf("%d", &rowB);
    printf("Enter column size: ");
    scanf("%d", &columnB);
    printf("Enter Matrix B Elements: \n");

    for (rowCounter = 0; rowCounter < rowB; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < columnB; columnCounter++)
        {
            scanf("%d", &matrixB[rowCounter][columnCounter]);
        }
    }

    printf("\n");
    printf("Matrix B:\n");
    for (rowCounter = 0; rowCounter < rowB; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < columnB; columnCounter++)
        {
            printf("%d\t", matrixB[rowCounter][columnCounter]);
        }
        printf("\n");
    }

    if (columnA != rowB)
    {
        printf("\nCould not Multiply!\n");
        printf("Number of columns of first matrix must match number of columns of second matrix.\n");
    }
    else
    {
    printf("\n");
    printf("--------------Multiplying Elements------------------\n");

    for (rowCounter = 0; rowCounter < rowA; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < columnB; columnCounter++)
        {
            sum = 0;

            for (innerCounter = 0; innerCounter < rowA; innerCounter++)
            {
                sum += ((matrixA[rowCounter][innerCounter]) * (matrixB[innerCounter][columnCounter]));
            }
                matrixC[rowCounter][columnCounter] = sum;
        }
    }
    printf("\n");
    printf("Matrix C:\n");
    for (rowCounter = 0; rowCounter < rowA; rowCounter++)
    {
        for (columnCounter = 0; columnCounter < columnB; columnCounter++)
        {
            printf("%d\t", matrixC[rowCounter][columnCounter]);
        }
        printf("\n");
    }
}


    return;
}

