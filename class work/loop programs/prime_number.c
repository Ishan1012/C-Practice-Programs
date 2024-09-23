/* Program to check whether the number is prime number or not */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n, p, c = 0, i;

    // Taking number from user
    printf("Enter n: ");
    scanf("%d", &n);

    // finding number of factors of n
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            c++;
    
    // To check whether the number is prime or not
    if (c == 2)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}
