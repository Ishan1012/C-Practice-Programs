/* Program to reverse a number */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,r,s=0;

    // Taking number from user
    printf("Enter n: ");
    scanf("%d",&n);

    // Reversing the number
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }

    // Printing the reversed number
    printf("Reverse of digits: %d",s);
    return 0;
}
