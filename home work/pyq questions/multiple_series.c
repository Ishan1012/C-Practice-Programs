#include <stdio.h>
#include <math.h>

int pattern1(int);
int pattern2(int);
int pattern3(int);
int pattern4(int);
int pattern5(int);
int fact(int);

int main(int argc, char const *argv[])
{
    int n, sum, p = 1;

    printf("Enter value of n: ");
    scanf("%d", &n);

    sum = pattern1(n);
    printf("Sum of series%d = %d\n", p++, sum);
    sum = pattern2(n);
    printf("Sum of series%d = %d\n", p++, sum);
    sum = pattern3(n);
    printf("Sum of series%d = %d\n", p++, sum);
    sum = pattern4(n);
    printf("Sum of series%d = %d\n", p++, sum);
    sum = pattern5(n);
    printf("Sum of series%d = %d\n", p++, sum);

    return 0;
}

int pattern1(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
        sum = sum + ((float)i / fact(i));

    return sum;
}

int pattern2(int n)
{
    int i, sum = 0, x;

    printf("Enter value of x: ");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
        sum = sum + x * i;

    return sum;
}

int pattern3(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
        sum = sum + fact(i);

    return sum;
}

int pattern4(int n)
{
    int i, sum = 0, x;

    printf("Enter value of x: ");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
        sum = sum + pow(-1, i + 1) * pow(x, 2 * i - 1);

    return sum;
}

int pattern5(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
        sum = sum + pow(-1, i) * pow(2 * i - 1, 3);

    return sum;
}

int fact(int n)
{
    int i, f = 1;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}