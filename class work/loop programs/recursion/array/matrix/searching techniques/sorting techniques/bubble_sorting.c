/* Program for Bubble sorting */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int a[100], n, i, j, t;

    // Taking size of array from user
    printf("Enter size of the array: ");
    scanf("%d", &n);

    // Taking elements from user
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Bubble sorting algorithm
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }

    // Printing Sorted Array
    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

/* Best case time complexity: O(n²) */
/* Worst case time complexity: O(n²) */
