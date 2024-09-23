#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, d, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    printf("Reverse of number=%d", rev);

    return 0;
}
