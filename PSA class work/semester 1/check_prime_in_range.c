#include <stdio.h>
#include <math.h>

int Prime(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int a, b, i;

    printf("Enter the range: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d to %d:\n",a,b);

    for (i = a; i <= b; i++)
    {
        if (Prime(i))
            printf("%d ", i);
    }

    return 0;
}
