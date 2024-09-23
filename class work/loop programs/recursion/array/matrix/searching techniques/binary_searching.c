/* Program for Binary Searching */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[100], n, i, j, key, beg, end, mid;

    // Taking size of array from user
    printf("Enter size of the array: ");
    scanf("%d", &n);

    // Taking elements from the user
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Taking key from user
    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    // Binary Searching
    beg = 0;
    end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (key == a[mid])
        {
            printf("Element found at position %d.", mid + 1);
            break;
        }
        else if (key < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;

        if (beg == mid)
            printf("Element not found!");
    }
}