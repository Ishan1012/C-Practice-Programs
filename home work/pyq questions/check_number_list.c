#include <stdio.h>
#include <math.h>

void palindrome(int);
void armstrong(int);
void prime(int);

int main(int argc, char const *argv[])
{
    int n, ch;

    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter to check(1,2,3): ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        palindrome(n);
        break;
    case 2:
        armstrong(n);
        break;
    case 3:
        prime(n);
    }

    return 0;
}

void palindrome(int n)
{
    int num, d, rev = 0;

    num = n;

    while (n != 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    if (num == rev)
        printf("Palindrome number");
    else
        printf("Not Palindrome number");
}

void prime(int n)
{
    int i = 0, count = 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
        printf("Prime number");
    else
        printf("Not Prime Number");
}

void armstrong(int n)
{
    int num, d,c, sum = 0, count = 0;

    num = n;

    while (num != 0)
    {
        count++;
        num /= 10;
    }

    num = n;

    while (num != 0)
    {
        d = num % 10;
        c = pow(d, count);
        sum = sum + c;
        num /= 10;
    }

    if (n == sum)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
}