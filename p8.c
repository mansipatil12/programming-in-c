#include <stdio.h>

int main()
{
    int matrix1[100][100], matrix2[100][100], result[100][100];
    int i, j, rows, columns, choice;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d%d", &rows, &columns);

    printf("\nEnter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        printf("\nResult of addition:\n");
        break;
    case 2:
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                result[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }
        printf("\nResult of subtraction:\n");
        break;
    case 3:
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < columns; k++)
                {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        printf("\nResult of multiplication:\n");
        break;
    case 4:
        printf("\nTranspose of first matrix:\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf("%d\t", matrix1[j][i]);
            }
            printf("\n");
        }
        printf("\nTranspose of second matrix:\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf("%d\t", matrix2[j][i]);
            }
            printf("\n");
        }
        return 0;
    default:
        printf("\nInvalid choice!\n");
        return 0;
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
