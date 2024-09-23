/* Program to find -1+3-5+7-...n times */
#include<stdio.h>
#include<math.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,i,s=0,k=1;

    // Taking value from user
    printf("Enter n: ");
    scanf("%d",&n);

    // Finding the sum of series
    for(i=1;i<=n;i++)
    {
        s=s+k*pow(-1,i);
        k=k+2;
    }

    // Printing the sum
    printf("Sum=%d",s);
    return 0;
}
