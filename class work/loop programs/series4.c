/* Program to find 1 + 1/3 + 1/5 + 1/7 + ... n times */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,i,k=1;
    double s=0;

    // Taking value from user
    printf("Enter n: ");
    scanf("%d",&n);

    // Finding the sum of series
    for(i=1;i<=n;i++)
    {
        s=s+(1.0/k);
        k=k+2;
    }

    // Printing the sum
    printf("Sum=%lf",s);
    return 0;
}
