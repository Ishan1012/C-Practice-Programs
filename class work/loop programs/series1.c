/* Program to find 1+2+3+4+...+n */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,i,s=0;

    // Taking value of n from user
    printf("Enter n: ");
    scanf("%d",&n);

    // To add n numbers
    for(i=1;i<=n;i++)
    s=s+i;

    // Printing the sum of series
    printf("Sum=%d",s);
    return 0;
}
