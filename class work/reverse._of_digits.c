/* Program to print the reverse of a number */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n, r, s = 0;

    // Taking number from the user
    printf("Enter the number: ");
    scanf("%d", &n);

    // Logic for calculating reverse of a number
    while (n > 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }

    // Printing reverse of the number
    printf("Reverse = %d", s);

    return 0;
}
