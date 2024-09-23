#include <stdio.h>

int fact(int);
int ncr(int, int);

int main(int argc, char const *argv[])
{
    int n, i, j;
    printf("Enter the no of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) // for rows
    {
        for (j = 0; j < n - i - 1; j++) // for spaces
            printf(" ");
        for (j = 0; j <= i; j++) // for columns
            printf("%2d", ncr(i, j));
        printf("\n");
    }

    return 0;
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
} // returns factorial of a number

int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
} // returns ncr of a number