/* Program to find -1 + x^3/3 - x^5/5 + ... n times */
#include<stdio.h>
#include<math.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,x,i,k=1;
    double s=0;

    // Taking values from user
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter x: ");
    scanf("%d",&x);

    // Finding the sum of series
    for(i=1;i<=n;i++)
    {
        s=s+((pow(x,k)/k)*pow(-1,i));
        k=k+2;
    }

    // Printing the sum
    printf("Sum=%lf",s);
    return 0;
}
