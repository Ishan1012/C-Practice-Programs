/* Program to check whether the number is perfect number or not */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n, s = 0, i;

    // Taking number from user
    printf("Enter number: ");
    scanf("%d", &n);

    // Finding sum of factors of number
    for (i = 1; i < n; i++)
        if (n % i == 0)
            s = s + i;

    // To check whether the number is perfect number or not
    if (s == n)
        printf("Perfect number");
    else
        printf("Not Perfect Number");

    return 0;
}