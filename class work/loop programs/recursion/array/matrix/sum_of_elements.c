/* Program to print sum of all elements in a matrix */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[3][3], i, j, sum = 0;

    // Taking elements from user
    printf("Enter matrix elements:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Finding the sum of elements from the user
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum += a[i][j];

    // Printing the sum
    printf("Sum=%d", sum);

    return 0;
}
