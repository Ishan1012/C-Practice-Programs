#include <stdio.h>

int prime(int);

int main(int argc, char const *argv[])
{
    int n, count = 0, i = 2;

    printf("Enter value of n: ");
    scanf("%d", &n);

    while(1)
    {
        if (prime(i))
        {
            printf("%d ", i);
            count++;
        }
        i++;
        if (count == n)
            break;
    }

    return 0;
}

int prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}