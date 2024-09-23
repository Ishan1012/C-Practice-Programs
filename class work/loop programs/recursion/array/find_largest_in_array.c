/* Program to find largest element in the array */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Loacl variable declaration
    int n, a[20], i, largest;

    // Taking value of n from user
    printf("Enter the number: ");
    scanf("%d", &n);

    // Taking elements from user
    for (i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", a + i);
    }

    // Finding largest element in the array
    largest=a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];
    }

    // Displaying the largest element
    printf("Largest = %d", largest);

    return 0;
}
