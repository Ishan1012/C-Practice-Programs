// Program to make arithmetic function
#include<stdio.h>

// Function Declaration
int add(int,int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);

// Driver Code
int main(int argc, char const *argv[])
{
    int a,b,t;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    t=add(a,b);
    printf("Sum: %d\n",t);
    t=subtract(a,b);
    printf("Subtract: %d\n",t);
    t=multiply(a,b);
    printf("Multiply: %d\n",t);
    t=divide(a,b);
    printf("Divide: %d\n",t);
    return 0;
}

// function definition of add
int add(int a,int b)
{
    int s;
    s=a+b;
    return s;
}

// function definition of subtract
int subtract(int a,int b)
{
    int s;
    s=a-b;
    return s;
}

// function definition of multiply
int multiply(int a,int b)
{
    int s;
    s=a*b;
    return s;
}

// function definition of divide
int divide(int a,int b)
{
    int s;
    s=a/b;
    return s;
}