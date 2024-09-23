/* Program to check whether matrix is symmetrical or not */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[3][3], i, j;

    // Taking matrix from user
    printf("Enter matrix elements:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Printing original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%2d", a[i][j]);
        printf("\n");
    }

    // Checking whether the matrix is symmetric or not
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if(a[i][j]!=a[j][i])
            {
                printf("Not Symmetric matrix");
                break;
            }

    if(i==3 && j==3)
    printf("Symmetric matrix");

    return 0;
}
