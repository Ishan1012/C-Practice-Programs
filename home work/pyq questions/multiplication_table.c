#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
        printf("%dx%d=%d\n", n, i, (n * i));

    return 0;
}
