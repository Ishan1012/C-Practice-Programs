/* Program to find the sum of diagonal elements */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[3][3], i, j, sum = 0;

    // Taking matrix from the user
    printf("Enter matrix elements:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Finding the sum of diagonal elements
    for (i = 0; i < 3; i++)
        sum += a[i][i];

    // Printing the sum of diagonal elements
    printf("Diagonal elements sum=%d", sum);

    return 0;
}
