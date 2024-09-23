// Program to chck whether the program is odd or even
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n;

    // Taking values from user
    printf("Enter number: ");
    scanf("%d",&n);

    // Checking whether the number is even or odd
    (n%2==0)?printf("Number is even"):printf("Number is odd");

    return 0;
}