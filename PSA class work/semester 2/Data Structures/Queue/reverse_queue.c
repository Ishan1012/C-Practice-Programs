/* Program to reverse the queue using stack */

/* Logic: queue() -> enQueue()
                  -> deQueue()
          stack() -> push()
                  -> pop()
*/

#include <stdio.h>
#include <windows.h>

// Macro to store maximum size of stack and queue
#define MAXSIZE 200

// Global declaration of queue and its parameters
int queue[MAXSIZE];
int front = -1;
int rear = -1;

// Global declaration of stack and its parameters
int stack[MAXSIZE];
int top = -1;

void enQueue(int data)
{
    // Check whether queue is overflow
    if (rear == MAXSIZE - 1)
    {
        printf("Queue is full. ");
        return;
    }
    // Queue is empty
    if (rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    queue[rear] = data;
}

// Function declaration of deQueue
int deQueue()
{
    int data;
    // Check for underflow of queue
    if (front == -1)
    {
        printf("Queue is empty.");
        return -1;
    }
    data = queue[front];
    // Queue is empty
    if (rear == front)
    {
        rear = front = -1;
    }
    else
    {
        front = front + 1;
    }
    return data;
}

// Function declaration of massEnQueue
void massEnQueue(int n)
{
    int data;
    
    printf("\nEnter elements: ");

    while (n > 0)
    {
        scanf("%d", &data);
        enQueue(data);
        n--;
    }
}

// Function declaration of printQ
void printQ()
{
    int i;
    // Chech if queue is empty
    if (front == -1)
    {
        printf("Queue is empty.");
        return;
    }
    // Printing the queue
    printf("\n===========================\n");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
        Sleep(300);
    }
    printf("\n===========================\n");
}

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

// Function declaration of reverseQueue
void reverseQueue()
{
    int i, temp;

    // To delete from queue and insert in stack
    while (front != -1)
    {
        temp = deQueue();
        push(temp);
    }

    // To delete from stack and insert in queue
    while (!isempty())
    {
        temp = pop();
        enQueue(temp);
    }
}

// Driver code
int main()
{
    // Local variable declaration
    int choice, item, flag = 1;

    // Infinite loop with flag for break
    while (flag)
    {
        // Taking input from user
        printf("\n*****MENU*****\
                \n1.Insert 2.Mass insertion 3.Delete 4. Print 5. Reverse the queue 6. Exit\
                \nEnter your choice: ");
        scanf("%d", &choice);

        // To check the operation to be performed
        switch (choice)
        {
        case 1:
            printf("\nEnter the item: ");
            scanf("%d", &item);
            enQueue(item);
            break;

        case 2:
            printf("\nEnter no. of items: ");
            scanf("%d", &item);
            massEnQueue(item);
            break;

        case 3:
            item = deQueue();
            printf("\nItem deleted = %d", item);
            break;

        case 4:
            printf("\nPrinting the queue: \n");
            printQ();
            break;

        case 5:
            printf("\nQueue before reversing: \n");
            printQ();
            reverseQueue();
            printf("\nQueue after reversing: \n");
            printQ();
            break;

        default:
            flag = 0;
            break;
        }

        printf("\n---------------------------------------------------------------\n");
    }

    return 0;
}
// End of main function