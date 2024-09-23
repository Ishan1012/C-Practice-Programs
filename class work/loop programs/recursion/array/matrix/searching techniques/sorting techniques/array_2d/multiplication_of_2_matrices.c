#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a[10][10], b[10][10], c[10][10] = {0}, r1, r2, c1, c2, i, j, k;

    printf("Enter order of First matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter order of Second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != c2)
    {
        printf("Multiplication not possible");
        exit(0);
    }

    printf("Enter first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];

    printf("Matrix multiplication:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
