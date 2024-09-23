/* Program for transpose of a matrix */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int length,i,j;

    // Taking size of the matrix
    printf("Enter the size of matrix: ");
    scanf("%d",&length);

    // Declaring matrices
    int a[length][length],transpose[length][length];

    // Taking elements of matrix
    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            printf("Enter element: ");
            scanf("%d",&a[i][j]);
        }
    }

    // Logic for transpose of a matrix
    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            transpose[i][j]=a[j][i];
        }
    }

    // Printing original matrix
    printf("Original Matrix: \n");

    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    // Printing Transpose of the matrix
    printf("Transpose: \n");

    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
