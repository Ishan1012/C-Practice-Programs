/* Program to check whether the number is palindrome or not using while loop */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n, a, r, s = 0;

    // Taking value of n from user
    printf("Enter n: ");
    scanf("%d", &n);

    // Storing n in variable a
    a = n;

    // Reversing the number
    while (n != 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }

    // Checking whether number is palindrome or not
    if (s == a)
        printf("Palindrome number");
    else
        printf("Not Palindrome number");

    return 0;
}
