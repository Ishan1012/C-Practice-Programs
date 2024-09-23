#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, d, sum = 0, product = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        d = n % 10;
        sum = sum + d;
        product = product * d;
        n /= 10;
    }

    printf("Sum=%d\nProduct=%d", sum, product);
    return 0;
}
