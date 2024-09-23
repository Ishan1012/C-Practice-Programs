/* Program for matrix multiplication */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[3][3], i, j, k, a2[3][3], sum[3][3];

    // Taking elements of first matrix
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Taking elements of second matrix
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a2[i][j]);

    // multiplication of matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            for (k = 0; k < 3; k++)
                sum[i][j] = sum[i][j] + a[i][k] * a2[k][j];
    }

    // Printing first matrix
    printf("First Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%2d", a[i][j]);
        printf("\n");
    }

    // Printing second matrix
    printf("Second Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%2d", a2[i][j]);
        printf("\n");
    }

    // Printing the product matrix
    printf("Multiplication of Matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
