// Divisible Sum Pair in C
#include<stdio.h>

// function declaration
int divisibleSumPairs(int,int,int,int*);

// Driver code
int main(int argc, char const *argv[])
{
    int n,k,ar_count=0,i;

    printf("Enter value of n: ");
    scanf("%d",&n);

    printf("Enter value of k: ");
    scanf("%d",&k);

    int ar[n];

    // Taking array elements 
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);

    // function call
    printf("%d",divisibleSumPairs(n,k,ar_count,ar));
    return 0;
}

// function definition
int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int i,j;
    ar_count=0;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if((ar[i]+ar[j])%k==0)
                ar_count++;
        }
    }
    
    return ar_count;
}
