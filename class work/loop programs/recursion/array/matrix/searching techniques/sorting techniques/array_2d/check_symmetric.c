/* Program to check whether matrix is symmetric or not */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{   
    // Local variable declaration
    int a[3][3], i, j;

    // Taking
    printf("Enter matrix elements: ");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            break;

    if (i == 3 && j == 3)
        printf("Symmetric");
    else
        printf("Not Symmetric");
        
    return 0;
}
