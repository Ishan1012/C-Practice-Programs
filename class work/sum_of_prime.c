/* Program to break a number into sum of two prime numbers */
#include <stdio.h>
#include <math.h>

// Function definition of prime
int prime(int n)
{
    int i;

    // To check whether the number is prime or not
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n, i;

    // Taking input fromm user
    printf("Enter the number: ");
    scanf("%d", &n);

    // Logic to find two prime numbers that add up to the given number
    for (i = 2; i <= n / 2; i++)
    {
        if (prime(i) && prime(n - i))
            printf("%d = %d + %d\n", n, i, n - i);
    }

    return 0;
}