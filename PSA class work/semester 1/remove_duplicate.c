/* Program to remove duplicate elements from sorted array */
#include <stdio.h>

// Function declaration
int RemoveDuplicate(int[],int);

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n, arr[100], i;

    // Taking input from user
    printf("Enter n: ");
    scanf("%d", &n);

    // Taking elements from the user
    printf("Enter sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Printing original array elements
    printf("\nOriginal  Array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Function call
    n = RemoveDuplicate(arr, n);

    // Printing array elements after removing duplicate elements
    printf("\nArray after removing duplicate:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

// Function declaration
int RemoveDuplicate(int arr[],int n)
{
    int i,j=0;

    for(i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[j]=arr[i];
            j++;
        }
    }
    arr[j++]=arr[n-1];

    return j;
}