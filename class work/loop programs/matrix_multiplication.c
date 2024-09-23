/* Program matrix multiplication of square matrix */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int length,i,j,sum=0,k,m=0,n=0;

    // Taking length of the matrix
    printf("Enter length of the matrix: ");
    scanf("%d",&length);

    // Declaring matrices
    int matrix[length][length],matrix2[length][length],
    product[length][length];

    //taking input from user

    printf("Enter first matrix: \n");

    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            printf("Enter element: ");
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Enter second matrix: \n");

    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            printf("Enter element: ");
            scanf("%d",&matrix2[i][j]);
        }
    }

    //calculating the matrix multiplication

    for(i=0,m=0;i<length;i++,m++)
    {
        for(j=0,n=0;j<length;j++,n++)
        {
            for(k=0;k<length;k++)
                sum+=matrix[i][k]*matrix2[k][j];

            product[m][n]=sum;
            sum=0;
        }
    }

    // Printing Product of matrices
    printf("Matrix multiplication: \n");

    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
