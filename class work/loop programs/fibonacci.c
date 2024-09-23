/* Program to print fibonacci series using for loop */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    long long int a=0,b=1,c,n,i;

    // Taking limit from user
    printf("Enter limit: ");
    scanf("%d",&n);

    // Printing initial values of a and b 
    printf("%d,%d,",a,b);

    // Printing the remanining fibonacci series
    for(i=1;i<=(n-2);i++)
    {
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }

    return 0;
}
