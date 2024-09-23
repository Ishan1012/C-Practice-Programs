/* Program to display sum of digits using while loop */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,r,s=0;

    // Taking number from user
    printf("Enter n: ");
    scanf("%d",&n);

    // Finding the sum of digits
    while (n!=0)
    {
        r=n%10;
        s=s+r;
        n/=10;
    }
    
    // Printing the sum of digits
    printf("Sum = %d",s);

    return 0;
}
