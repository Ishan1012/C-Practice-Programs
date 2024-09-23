/* Program to find 1+3+5+...+n */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,i,s=0,k=1;

    // Taking the number from the user
    printf("Enter n: ");
    scanf("%d",&n);

    // Adding first n odd numbers
    for(i=1;i<=n;i++,k=k+2)
    s=s+k;

    // Printing the sum
    printf("Sum=%d",s);
    return 0;
}
