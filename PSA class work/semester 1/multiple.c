#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, num, c = 0, d;
    printf("Enter the number: ");
    scanf("%d", &n);

    num = n;
    while (num != 0)
    {
        d = num % 10;
        if (d != 0 && n % d == 0)
        {
            printf("%d is divisible by its digit %d\n", n, d);
            c++;
        }
        else
            printf("%d is not divisible by its digit %d\n", n, d);
        num /= 10;
    }

    if (c >= 2)
        printf("Yes");
    else
        printf("No");
    return 0;
}
