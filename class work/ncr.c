// Program to find nCr (combinations to be taken)
#include<stdio.h>

// function declaration
int combination(int,int);
int fact(int);

// Driver Program
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,r,c;

    // Taking input from user
    printf("Enter n and r: ");
    scanf("%d %d",&n,&r);

    // Function call
    c=combination(n,r);
    printf("nCr = %d",c);
    return 0;
}

// Function definition of combination
int combination(int n,int r)
{
    int c,nf,rf,nsrf;

    nf=fact(n);
    rf=fact(r);
    nsrf=fact(n-r);

    c=nf/(rf*nsrf);
    return c;
}

// Function definition of fact
int fact(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
    f*=i;

    return f;
}