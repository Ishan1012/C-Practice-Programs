/* Program to find the transpose of a matrix */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{   
    // Local variable declaration
    int a[3][3], i, j, ta[3][3];

    // Taking elements of matrix
    printf("Enter matrix elements:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Finding transpose of a matrix
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            ta[i][j] = a[j][i];

    // Displaying original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%2d", a[i][j]);
        printf("\n");
    }

    // Displaying transpose matrix
    printf("Transpose Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%2d", ta[i][j]);
        printf("\n");
    }

    return 0;
}
