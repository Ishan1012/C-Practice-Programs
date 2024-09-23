/* Program for Linear Searching */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[100], n, i, j, key;

    // Taking size of array from user
    printf("Enter size of the array: ");
    scanf("%d", &n);

    // Taking elements from user
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Taking key from user
    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    // Linear search algorithm
    for (i = 0; i < n; i++)
        if (a[i] == key)
        {
            printf("Element found at position %d.", i + 1);
            break;
        }

    // If element not found, i.e., for loop reached to its end
    if (i == n)
        printf("Element not found.");
    return 0;
}
