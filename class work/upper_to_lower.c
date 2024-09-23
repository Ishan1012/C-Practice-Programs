// Program to convert character from uppercase to lowercase
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    char ch;

    // Taking character from user
    printf("Enter the character in uppercase: ");
    scanf("%c",&ch);

    // converting from uppercase to lowercase
    ch=ch+32;

    // Printing the lowercase character
    printf("The character in lowercase is %c",ch);

    return 0;
}