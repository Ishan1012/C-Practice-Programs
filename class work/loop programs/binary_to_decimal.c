/* Program to number form binary to decimal */
#include<stdio.h>
#include<math.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int d,r,b=0,i=0,u;

    // Taking binary number from user
    printf("Enter number in binary: ");
    scanf("%d",&d);

    // To convert from binary to decimal
    while(d!=0)
    {
        r=d%10;
        b=b+pow(2,i)*r;
        d=d/10;
        i++;
    }

    // To print the decimal number
    printf("Decimal number = %d",b);

    return 0;
}