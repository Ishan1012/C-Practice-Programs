// To print a list and ask the user what operation is to be done 
#include<stdio.h>

// Fuction declaration
void checkPrime(int);
void checkPerfect(int);
void evenOdd(int);

// Driver program
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,choice;

    // Taking input from the user
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("1.Check Prime number\n2.Check Perfect number\n3.Check Even/Odd number\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: checkPrime(n);break;  //function call  
        case 2: checkPerfect(n);break;//function call
        case 3: evenOdd(n);           //function call
    }
    
    return 0;
}

// Function definition of checkPrime
void checkPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    if(n%i==0)
    {
        printf("Not Prime Number");
        return;
    }

    printf("Prime Number");
}

// Function definition of checkPerfect
void checkPerfect(int n)
{
    int i,s=0;
    for(i=1;i<n;i++)
    if(n%i==0)
    s=s+i;

    if(s==n)
        printf("Perfect number");
    else
        printf("Not Perfect number");
}

// Function definition of evenOdd
void evenOdd(int n)
{
    if(n%2==0)
    printf("Even number");
    else 
    printf("Odd number");
}