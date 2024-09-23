#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int smoothing(int A[100][100], int i, int il, int j, int jl,int jh)
{
    if (i == il && j == jl)
        return A[i][j];
    else if (j == jl)
    {
        return A[i][j] + smoothing(A, i - 1, il, jh, jl,jh);
    }
    else
        return A[i][j] + smoothing(A, i, il, j - 1, jl,jh);
}

int main()
{
    int A[100][100];
    int B[100][100];

    int n, l, sum, i2, j2;

    scanf("%d", &n);
    scanf("%d", &l);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            int ih, il, jh, jl;
            sum = 0;

            /*
               Code for calculating B[i][j]
           */

            il = max(i - l, 0);
            ih = min(i + l, n - 1);
            jl = max(j - l, 0);
            jh = min(j + l, n - 1);

            sum = smoothing(A, ih, il, jh, jl, jh);

            B[i][j] = sum;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}