/* Program to rotate matrix by 180 degree anti-clockwise */
#include <stdio.h>

// function declaration
void swap(int *, int *);

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[100][100], i, j, k, n, count = 2;

    // Taking order of matrix from the user
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    // Taking matrix elements from the user
    printf("\nEnter matrix of %dx%d:\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Logic to rotate the matrix by 90 degree for two times
    while (count)
    {
        // Logic to transpose matrix
        for (i = 0; i < n; i++)
            for (j = 0; j < i; j++)
                swap(&a[i][j], &a[j][i]);

        // Logic to swap columns
        for (j = 0, k = n - 1; j < k; j++, k--)
            for (i = 0; i < n; i++)
                swap(&a[j][i], &a[k][i]);

        count--;
    }

    // Matrix after 180 degree anti-clockwise turn
    printf("\nMatrix after 180 degree anti-clockwise turn:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function definition
void swap(int *A, int *B)
{
    int temp;

    // swapping two numbers using third element
    temp = *A;
    *A = *B;
    *B = temp;
}