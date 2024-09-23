/* Program for matrix multiplication of rectangular matrices */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int row_length,column_length,row_length2,column_length2,i,j,sum=0,k,m=0,n=0;

    // Taking dimensions of both matrices
    printf("Enter rows in first matrix: ");
    scanf("%d",&row_length);
    printf("Enter columns in first matrix: ");
    scanf("%d",&column_length);
    printf("Enter rows in second matrix: ");
    scanf("%d",&row_length2);
    printf("Enter columns in second matrix: ");
    scanf("%d",&column_length2);

    // declaration of matrices
    int matrix[row_length][column_length],
        matrix2[row_length2][column_length2];

    // condition for matrix multiplication
    if(column_length==row_length2 && row_length>0 && column_length>0
    && row_length2>0 && column_length2>0)
    {
        // Matrix to store product of the marices
        int product[row_length][column_length2];

        // Taking elements of first matrix
        printf("Enter first matrix: \n");

        for(i=0;i<row_length;i++)
        {
            for(j=0;j<column_length;j++)
            {
                printf("Enter element: ");
                scanf("%d",&matrix[i][j]);
            }
        }

        // Taking elements of second matrix
        printf("Enter second matrix: \n");

        for(i=0;i<row_length2;i++)
        {
            for(j=0;j<column_length2;j++)
            {
                printf("Enter element: ");
                scanf("%d",&matrix2[i][j]);
            }
        }
        
        // calculating the matrix multiplication
        for(i=0,m=0;i<row_length;i++,m++)
        {
            for(j=0,n=0;j<column_length2;j++,n++)
            {
                sum=0;
                for(k=0;k<column_length;k++)
                    sum+=matrix[i][k]*matrix2[k][j];

                product[m][n]=sum;
            }
        }

        // Printing multiplication of matrix
        printf("Matrix multiplication: \n");

        for(i=0;i<row_length;i++)
        {
            for(j=0;j<column_length2;j++)
            {
                printf("%d ",product[i][j]);
            }
            printf("\n");
        }

    }
    else    // if condition for matrix multiplication is false
    printf("Invalid order of matrices");

    return 0;
}
