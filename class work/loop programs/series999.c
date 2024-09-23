/* Program to 9+99+999+9999+...n times */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration 
    int n,i,s=0,t=0;

    // Taking value from user
    printf("Enter limit: ");
    scanf("%d",&n);

    // Finding the sum of series
    for(i=1;i<=n;i++)
    {
        t=t*10+9;
        s=s+t;
    }

    // Printing the sum
    printf("Sum = %d",s);

    return 0;
}
