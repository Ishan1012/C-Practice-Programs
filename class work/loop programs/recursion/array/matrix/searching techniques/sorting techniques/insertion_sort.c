/* Program for Insertion Sorting */
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

    // Insertion sorting algorithm
    for (j = 0; j < n; j++)
    {
        key=a[j];
        i=j-1;
        while (i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }

    // Printing Sorted Array 
    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

/* Best case time complexity: O(n) */
/* Worst case time complexity: O(n²) */