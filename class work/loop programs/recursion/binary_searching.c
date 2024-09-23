/* Program for binary search */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[20], i, n, key, beg, mid, end;

    // Taking no of elements from the user
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
    
    // initializing variables beg and end
    beg = 0;
    end = n - 1;
    
    // binary search algorithm
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (key == a[mid])
        {
            printf("Found at position %d", mid + 1);
            break;
        }
        else if (key < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;

        if (beg == end)
            printf("Element not found!");
    }
    
    return 0;
}
