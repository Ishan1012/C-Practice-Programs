/* Program to find the equilibrium index (optimized approach) (O(n)) */
#include <stdio.h>

// Function definition
int equilibrium(int[], int);

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int arr[100], n, i, result;

    // Taking length of array from user
    printf("Enter n: ");
    scanf("%d", &n);

    // Taking  array elements from user
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Function call
    result = equilibrium(arr, n);

    // Displaying results
    if (result == -1)
        printf("Equilibrium index not found");
    else
        printf("Equilibrium index is %d", result);

    return 0;
}

// Function definition of equilibrium
int equilibrium(int arr[], int n)
{
    int i, sum=0, Lsum = 0;

    // To get sum of all elements
    for (i = 0; i < n; i++)
        sum += arr[i];

    // To find equilibrium index
    for (i = 0; i < n; i++)
    {
        sum -= arr[i];
        if (Lsum == sum)
            return i;
        Lsum += arr[i];
    }

    return -1;
}