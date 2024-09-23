/* Implementation of Queue using array */
#include <stdio.h>

// Using macro to define the maxsize of queue
#define MAXSIZE 200

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
    }
    printf("\n===========================\n");
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
                \n1.Insert 2.Delete 3. Print 4. Exit\
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
            item = deQueue();
            printf("\nItem deleted = %d", item);
            break;

        case 3:
            printf("\nPrinting the queue: \n");
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