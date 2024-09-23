/* Program to print the GCD of two numbers */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int i, a, b, gcd;

    // Taking two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculating gcd on both numbers
    for (i = 1; i <= a && i <= b; i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;

    // Printing GCD of both numbers
    printf("Gcd: %d", gcd);
    
    return 0;
}
