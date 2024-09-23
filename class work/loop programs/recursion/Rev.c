/* Program to reverse number using recursion */
#include<stdio.h>

// Function definition
int rev(int n)
{
    // Static variable declataion
    static int r,s;

    // Base case
    if(n==0)
    return s;

    // Recursive case
    else
    {
        r=n%10;
        s=s*10+r;
        return rev(n/10);
    }
}

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,t;

    // Taking values from user
    printf("Enter the number: ");
    scanf("%d",&n);

    // Function call
    t=rev(n);

    // Printing the result
    printf("%d",t);
    return 0;
}
