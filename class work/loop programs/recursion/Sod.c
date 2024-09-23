/* Program to find sum of digits using recursion */
#include<stdio.h>

// Function definition
int rev(int n)
{
    // Static variable declaration
    static int r,s=0;

    // Base case
    if(n==0)
        return s;

    // Recursive case
    else
    {
        r=n%10;
        s=s+r;
        n=n/10;
        return rev(n);
    }
}

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,t;

    // Taking value from user
    printf("Enter the number: ");
    scanf("%d",&n);

    // Function call
    t=rev(n);

    // Printing the result
    printf("%d",t);
    return 0;
}
