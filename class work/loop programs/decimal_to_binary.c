/* Program to convert a number from decimal to binary */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int d,r,b=0,c=0,rev=0;

    // Taking decimal number from user
    printf("Enter number in decimal: ");
    scanf("%d",&d);

    // Converting decimal number to binary number
    while(d!=0)
    {
        r=d%2;
        b=b*10+r;
        d/=2;
        c++;
    }

    while(c!=0)
    {
        r=b%10;
        rev=rev*10+r;
        b=b/10;
        c--;
    }

    // To print binary number
    printf("Number in binary = %d",rev);
    return 0;
}
