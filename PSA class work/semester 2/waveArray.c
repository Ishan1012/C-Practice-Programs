/* Program for Wave Array(Brute force Approach) */
#include <stdio.h>

// Function declaration
void swap(int *, int *);
void BubbleSort(int[], int);
void waveArray(int[], int);

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int arr[100], n, i;

    // Taking length of array from user
    printf("Enter length of the array: ");
    scanf("%d", &n);

    // Taking array elements
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Function call
    waveArray(arr, n);

    // Printing wave array
    printf("Wave Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

// Function definition of swap
void swap(int *p, int *q)
{
    // Local variable declaration
    int temp;

    // Logic for swapping
    temp = *p;
    *p = *q;
    *q = temp;
}

// Function definition of Bubble Sort
void BubbleSort(int arr[], int n)
{
    // Local variable declaration
    int i, j;

    // Bubble sorting algorithm
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function definition of waveArray() function
void waveArray(int arr[], int n)
{
    // Local variable declaration
    int i;

    // Sorting the array using bubble sorting
    BubbleSort(arr, n);

    // Swapping adjacent positions
    for (i = 0; i < n; i += 2)
    {
        swap(&arr[i], &arr[i + 1]);
    }
}