#include<stdio.h>

int** input(int*);

int main(int argc, char const *argv[])
{
    int i,j,length,**p;
    
    p=input(&length);

    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int** input(int* adLength)
{
    int length,i,j;

    printf("Enter the length of matrix: ");
    scanf("%d",&length);

    *adLength=length;

    int a[length][length];

    printf("Enter the matrix: ");
    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            printf("Enter element: ");
            scanf("%d",&a[i][j]);
        }
    }

    return a;
}