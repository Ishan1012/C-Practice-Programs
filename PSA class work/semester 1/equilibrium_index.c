/* Program to find the equilibrium index (O(n2))*/
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
    int i, j, l_sum, r_sum;

    // To find equilibrium index
    for (i = 0; i < n; i++)
    {
        l_sum = 0;
        r_sum = 0;
        for (j = 0; j < i; j++)
            l_sum += arr[j];
        for (j = i + 1; j < n; j++)
            r_sum += arr[j];
        if (l_sum == r_sum)
            return i;
    }

    return -1;
}