/* Program to find sum of two matrices */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[3][3], i, j, a2[3][3],sum[3][3];

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

    // Finding sum of two matices
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum[i][j] = a[i][j]+a2[i][j];

    // Displaying resultant matrix
    printf("Sum of Matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3d", sum[i][j]);
        printf("\n");
    }

    return 0;
}
