// Program to print pascals triangle
#include<stdio.h>

// function declaration
int combination(int,int);
int fact(int);
void pascal(int);

// driver function
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);

    // function call
    pascal(n);

    return 0;
}

// function definition of pascal
void pascal(int n)
{
    int i,j,c;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            c=combination(i-1,j-1);
            printf("%d ",c);
        }
        printf("\n");
    }
}

// function definition of combination
int combination(int n,int r)
{
    int c,nf,rf,nsrf;

    nf=fact(n);
    rf=fact(r);
    nsrf=fact(n-r);

    c=nf/(rf*nsrf);
    return c;
}

// function definition of fact
int fact(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
    f*=i;

    return f;
}