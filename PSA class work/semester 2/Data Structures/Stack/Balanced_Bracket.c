/* Write a program to check balanced Brackets using stack.

   Eg:
   1. Input: str="([{}()]){[[]]}"
      Output: Balanced

   2. Input: str="(({}[[]])})"
      Output: Not Balanced
 */

#include<stdio.h>
#include<string.h>

// Using macro to store the size of stack and array
#define MAXSIZE 2000

// Declaration of global variables
char stack[MAXSIZE];
int top=-1;

// function declaration of isempty
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

// function declaration of isfull
int isfull()
{
    if(top==MAXSIZE-1)
        return 1;
    else
        return 0;
}

// function declaration of push
void push(char item)
{
    // To check whether the stack is full or not
    if(!isfull())
    {
        top=top+1;
        stack[top]=item;
        return;
    }
    else 
    {
        printf("\nStack Overflow. ");
        return;
    }
}

// function declaration of pop
char pop()
{
    char item;
    // To check whether the stack is empty or not
    if(!isempty())
    {
        item=stack[top];
        top=top-1;
        return item;
    }
    else
    {
        printf("\nStack Underflow. ");
        return '\0';
    }
}

// Function declaration of isMatchingPair
int isMatchingPair(char ch1,char ch2)
{
    if(ch1=='(' && ch2==')')
        return 1;
    else if(ch1=='{' && ch2=='}')
        return 1;
    else if(ch1=='[' && ch2==']')
        return 1;
    else
        return 0;
}

// Function declaration of balancedBracket
int balancedBracket(char str[])
{
    int i;
    char ch,pop_ch;

    // To implement required algorithm
    for(i=0;i<strlen(str);i++)
    {
        ch=str[i];
        if(ch=='{' || ch=='(' || ch=='[')
        {
            push(ch);
        }
        else if(ch=='}' || ch==')' || ch==']')
        {
            pop_ch=pop();

            if(isMatchingPair(pop_ch,ch)==0)
            {
                return 0;
            }
        }
    }

    // To check whether the stack is full or not
    if(!isempty())
    {
        return 0;
    }

    return 1;
}

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    char str[MAXSIZE];

    // Taking string from user
    printf("Enter the string: ");
    scanf("%[^\n]*%c",str);

    // To print whether the brackets are balanced or not
    if(balancedBracket(str))
    {
        printf("Balanced");
    }
    else
    {
        printf("Not Balanced");
    }
    
    return 0;
}
// End of main function 