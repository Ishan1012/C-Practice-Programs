/* Program for wave array (Optimized approach) */
#include <stdio.h>

// Function declaration
void swap(int *, int *);
void waveArray(int[], int);

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int i, n, arr[100];

    // Taking length of array from user
    printf("Enter the length of array: ");
    scanf("%d", &n);

    // Taking array elements from user
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Function call
    waveArray(arr, n);

    // Printing Wave Array
    printf("Wave Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

// Function declaration of swap
void swap(int *p, int *q)
{
    // Local variable declaration
    int temp;

    // Logic for swapping
    temp = *p;
    *p = *q;
    *q = temp;
}

// Function definition of waveArray() function
void waveArray(int arr[], int n)
{
    // Local variable declaration
    int i;

    // Logic for wave array
    for (i = 0; i < n; i += 2)
    {
        // To check previous position
        if (i > 0 && arr[i] < arr[i - 1])
            swap(&arr[i], &arr[i - 1]);
        
        // To check later position
        if (i < n - 1 && arr[i] < arr[i + 1])
            swap(&arr[i], &arr[i + 1]);
    }
}