#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, a, b, x, y;

    printf("Enter the value of a,b and x: ");
    scanf("%d %d %d", &a, &b, &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        y = pow(a * x + b, 2);
        break;
    case 2:
        y = a * pow(x, 2) + pow(b, 3);
        break;
    case 3:
        y = a * x + b;
        break;
    case 4:
        y = pow(a, 2) + x;
    }

    printf("Value of Y is = %d", y);

    return 0;
}
