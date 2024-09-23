#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, i, sum = 0,temp;

    printf("Enter limit: ");
    scanf("%d", &n);

    if (n >= 200)
        printf("Out of range!");
    else
    {
        for (i = 1; i <= n; i++)
        {
            temp = pow(-1, i + 1) * pow(i, 2);
            sum = sum + temp;
        }
    }

    printf("Sum of series = %d", sum);

    return 0;
}
