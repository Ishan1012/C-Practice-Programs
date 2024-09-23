/* Write a program  to reverse the String using stack */
#include <stdio.h>
#include <string.h>

// Using macro for maximum size of stack and array
#define MAXSIZE 2000

// Declaring global variables
char stack[MAXSIZE];
int top = -1;

// Function definition of push
void push(char item)
{
    if (top < MAXSIZE - 1)
    {
        top = top + 1;
        stack[top] = item;
        return;
    }
    else
    {
        printf("\nStack Overflow.");
        return;
    }
}

// Function definition of pop
char pop()
{
    char item;
    if (top >= 0)
    {
        item = stack[top];
        top = top - 1;
        return item;
    }
    else
    {
        printf("\nStack Underflow.");
        return '\0';
    }
}

// Function defnition of reverseString function
void reverseString(char str[])
{
    int i;
    char temp;

    for (i = 0; i < strlen(str); i++)
    {
        temp = str[i];
        push(temp);
    }

    for (i = 0; top != -1; i++)
    {
        str[i] = stack[top];
        pop();
    }
}

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    char str[MAXSIZE];

    // Taking string from user
    printf("Enter the string: ");
    scanf("%[^\n]*%c", str);

    // Function call of reverseString
    reverseString(str);

    // Printing reversed string
    printf("Reversed string = %s", str);

    return 0;
}
