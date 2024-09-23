/* Program to check whether the number is armstrong or not */
#include<stdio.h>
#include<math.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,r,s=0,t,num,c=0;

    // Taking number from the user
    printf("Enter n: ");
    scanf("%d",&n);

    // To store the number
    num=n;

    // To count the number of digits in the number
    while(num!=0)
    {
        num=num/10;
        c++;
    }

    // To restore the number
    t=n;

    // To calculate the sum of digits to the power of number of digits
    while(n!=0)
    {
        r=n%10;
        s=s+pow(r,c);
        n=n/10;
    }

    // To check whether the number is armstrong or not
    if(s==t)
    printf("Armstrong number");
    else
    printf("Not Armstrong number");
    
    return 0;
}
