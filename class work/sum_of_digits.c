/* Program to print sum of the digits of a number */
#include <stdio.h>

// Driver code
int main()
{
    // Local variable declaration
    int n, r, s = 0;

    // Taking input from user
    printf("Enter the number: ");
    scanf("%d", &n);

    // Logic to add the digits of the number
    while (n != 0)
    {
        r = n % 10;
        s = s + r;
        n = n / 10;
    }

    // Display sum of digits
    printf("Sum of digits = %d", s);

    return 0;
}