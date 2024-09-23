/* Program to find sum of n elements */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[20], n, i, sum = 0;
    
    // Taking number of elements from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking elements from user
    for (i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", a + i);
    }

    // Finding sum of n elements
    for (i = 0; i < n; i++)
        sum += a[i];

    // Printing the sum
    printf("Sum = %d", sum);
    return 0;
}
