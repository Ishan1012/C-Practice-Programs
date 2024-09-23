/* Matrix Multiplication */
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[100][100],b[100][100],c[100][100];
    int i,j,k,r1,r2,c1,c2,sum;

    // Taking order of matrices
    printf("Enter the order of first matrix");
    scanf("%d %d",&r1,&c1);

    printf("Enter the order of first matrix");
    scanf("%d %d",&r2,&c2);

    // Checking whether matrix multiplication is posiible or not
    if(r2!=c1)
    {
        printf("MAtrix Multiplication is not possible");
    }
    
    // Taking values of matrices
    printf("\nEnter the first matrix of %dx%d\n",r1,c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the second matrix of %dx%d\n",r2,c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    // Matrix Multiplication
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            sum+=a[i][k]*b[k][j];
        }
        c[i][j]=sum;
    }

    // Printing the Resultant matrix
    printf("\nResultant Matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%4d",c[i][j]);
        printf("\n");
    }

    return 0;
}
