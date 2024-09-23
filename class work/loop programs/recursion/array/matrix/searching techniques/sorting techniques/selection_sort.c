/* Program for Selection sorting */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    int a[100], n, i, j, t, loc, min;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        min = a[i];
        loc = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < min)
            {
                min = a[j];
                loc = j;
            }
        if (loc != i)
        {
            t = a[i];
            a[i] = a[loc];
            a[loc] = t;
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

/* Best case time complexity: O(n²) */
/* Worst case time complexity: O(n²) */
