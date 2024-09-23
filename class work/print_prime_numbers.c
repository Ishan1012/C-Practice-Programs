// Program to print prime number in range
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int i,j;

    // to check prime number in range
    for(i=50;i<=100;i++)
    {
        // to check whether i is prime number or not
        for(j=2;j<i;j++)
        if(i%j==0)
        break;

        if(j==i)
        printf("%d,",i);
    }
        
    return 0;
}
