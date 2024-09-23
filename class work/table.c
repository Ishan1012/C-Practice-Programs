/* Program to print the table of any number(<=6553) */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,i=1;

    // Taking number from the user
    printf("Enter the number for the table: ");
    scanf("%d",&n);

    // Printing the table of that number
    while (i<=10)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
        i++;
    }
    
    return 0;
}
