/* Find the next greater element of each element in the given array.

    Eg: arr[]=[11,5,13,10,21,8,3]

    NGE:
    11 ----> 13
    5  ----> 13
    13 ----> 21
    10 ----> 21
    21 ----> 21
    8  ----> -1
    3  ----> -1
 */

#include <stdio.h>

// Using macro too store the maximum size of array and stack
#define MAXSIZE 2000

// Defining global variables
int stack[MAXSIZE];
int top = -1;

// Function definition of push
void push(int item)
{
    // To check whether stack is not full
    if (top < MAXSIZE - 1)
    {
        top = top + 1;
        stack[top] = item;
        return;
    }
    else
    {
        printf("\nStack overflow. ");
        return;
    }
}

// Function definition of pop
int pop()
{
    int item;
    // To check whether stack is not empty
    if (top >= 0)
    {
        item = stack[top];
        top = top - 1;
        return item;
    }
    else
    {
        printf("\nStack underflow");
        return -1;
    }
}

// Function definition of nextGreaterElement
void nextGreaterElement(int arr[], int n)
{
    // Local variable declaration
    int i, NGE, element;

    printf("\nNGE:\n");

    // Step 1
    push(arr[0]);

    // Step 2
    for (i = 1; i < n; i++)
    {
        NGE = arr[i];
        while (top != -1 && stack[top] < NGE)
        {
            element = pop();
            printf("\n%3d------>%3d", element, NGE);
        }
        push(NGE);
    }

    // Step 3
    while (top != -1)
    {
        element = pop();

        printf("\n%3d------> -1", element);
    }
}

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n, arr[MAXSIZE], i;

    // Taking size of array from user
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // Taking Elements of array from user
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call of nextGreaterElement
    nextGreaterElement(arr, n);

    return 0;
}
// End of main function