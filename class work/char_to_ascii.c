// Program to print the ascii value of a character
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    char ch;

    // Taking the character from user as the input
    printf("Enter the character = ");
    scanf("%c",&ch);

    // Printing the ascii value of the character
    printf("ASCII value is %d",ch);

    return 0;
}