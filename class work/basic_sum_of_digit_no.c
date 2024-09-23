// Program to calculate sum of a 3 digit number (100-999)
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,r,sum=0;

    // Taking number from user
    printf("enter the number: ");
    scanf("%d",&n);

    // adding first digit 
    r=n%10;
    sum=sum+r;
    n=n/10;

    // adding second digit 
    r=n%10;
    sum=sum+r;
    n=n/10;

    // adding third digit 
    r=n%10;
    sum=sum+r;
    n=n/10;

    // Printing sum
    printf("Reverse: %d",sum);

    return 0;
}
