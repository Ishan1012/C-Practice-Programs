/* Implementaion of stack in C */
#include <stdio.h>
#include <process.h>

// Defining a macro to hold the maximum size pf stack
#define MAXSIZE 20

// Defining global variables
int stack[MAXSIZE];
int top = -1;

// Function definition of isEmpty
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

// Function definition of isfull
int isfull()
{
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}

// Function definition of push
void push(int item)
{
    if (isfull())
        printf("\nStack overflow!");
    else
    {
        top = top + 1;
        stack[top] = item;
        return;
    }
}

// Function defnition of push
int pop()
{
    int item;
    if (isempty())
    {
        printf("\nStack is empty!");
        return -1;
    }
    else
    {
        item = stack[top];
        top = top - 1;
        return item;
    }
}

// Function defintion of peek
int peek()
{
    if (!isempty())
        return stack[top];
}

// Function definition of traverse
void traverse()
{
    for (int i = top; i >= 0; i--)
        printf("\n%d", stack[i]);
}