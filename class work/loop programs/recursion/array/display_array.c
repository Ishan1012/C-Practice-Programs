/* Program to input and display array elements */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n, a[20], i;

    // Taking value of n from the user
    printf("Enter the number: ");
    scanf("%d", &n);

    // Taking elements from the user
    for (i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", a + i);
    }

    // Displaying elements to user
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
        
    return 0;
}
