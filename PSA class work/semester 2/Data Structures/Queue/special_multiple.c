/* Program for Special multiple using queue */
#include <stdio.h>

// Using macro to define the maxsize of queue
#define MAXSIZE 500

// Global variable declaration
int queue[MAXSIZE];
int rear = -1;
int front = -1;

// Function declaration of enQueue
void enQueue(int data)
{
    // Check for overflow of queue
    if (rear == MAXSIZE - 1)
    {
        printf("Queue is Full");
        return;
    }
    // Queue is empty
    if (rear == -1)
    {
        rear = front = 0;
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

// Function declaration of getMultiple
int getMultiple(int n)
{
    // Local variable declaration
    int next1, next2, X;

    // Reset the array
    front = rear = -1; 

    enQueue(9);

    while (1)
    {
        X = deQueue();
        if (X % n == 0)
        {
            return X;
        }
        else
        {
            next1 = X * 10;
            next2 = (X * 10) + 9;
            enQueue(next1);
            enQueue(next2);
        }
    }
}

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n, num, result;

    printf("Enter n: ");
    scanf("%d", &n);

    // Taking n input from user
    while (n > 0)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        result = getMultiple(num);

        printf("Multiple = %d\n", result);

        n--;
    }
    return 0;
}
