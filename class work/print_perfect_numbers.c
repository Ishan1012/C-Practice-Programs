// Program to print perfect number in range
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // local variable declaration
    int i,j;
    int sum=0;

    // to check perfect number in range
    for(i=1;i<=100;i++)
    {
        // to check whether i is perfect number or not
        sum=0;
        for(j=1;j<i;j++)
        if(i%j==0)
        sum=sum+j;

        if(sum==i)
        printf("%d,",i);
    }
    return 0;
}
