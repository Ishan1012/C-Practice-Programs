#include <stdio.h>

int fibonacci(int);

int main(int argc, char const *argv[])
{
    int n, i;

    printf("Enter limit: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}