/* Program for linear searching */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{   
    // Local variable declaration
    int a[20], i, n, key;

    // Taking number of elements from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking elements from user
    for (i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", a + i);
    }

    // Taking key from user
    printf("Enter the number you want to search :");
    scanf("%d", &key);

    // Linear search algorithm
    for (i = 0; i < n; i++)
        if (key == a[i])
        {
            printf("Found at position = %d", i + 1);
            break;
        }

    // If element is not present in the list
    if (i == n)
        printf("Element not found.");

    return 0;
}