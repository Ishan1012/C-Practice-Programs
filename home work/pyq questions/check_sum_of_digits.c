#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n, d, sum = 0, prod = 1, even = 0;
    printf("Enter the number");
    scanf("%d", &n);

    if (n % 2 == 0)
        even++;

    while (n != 0)
    {
        d = n % 10;
        if (even)
            sum = sum + d;
        else
            prod = prod * d;
        n /= 10;
    }

    if (even)
    {
        printf("Sum of digits = %d", sum);
    }
    else
        printf("Product of digits = %d", prod);

    return 0;
}
