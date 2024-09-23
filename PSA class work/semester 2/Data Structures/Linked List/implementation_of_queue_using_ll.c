/* C program to implement Queue using Linked List */

#include <stdio.h>
#include <malloc.h>
#include <process.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *front = NULL;
node *rear = NULL;

void enQueue(int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->data=item;
    ptr->next=NULL;
    if(rear==NULL)
    {
        rear=front=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }
}

void deQueue()
{
    node* ptr;
    int item;
    if(front==NULL)     // Empty Q
    {
        printf("\nQueue is empty");
        return;
    }
    ptr=front;      // set ptr to front
    item=ptr->data; // copy
    if(front==rear) // one node condition
    {
        rear=front=NULL;
    }
    else
    {
        front=front->next;
    }
    free(ptr);
    printf("\nItem deleted = %d",item);
}

void display()
{
    node *ptr;
    if(front==NULL)
    printf("\nQueue is empty.");
    else
    {
        ptr=front;
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    char choice;

    int item, pos;

    do
    {
        printf("\n\n****MENU****\n\n");

        printf("1. Insertion \n2. Deletion\n3. Display\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("\n");
        scanf("%c", &choice);

        switch (choice)
        {
        case '1':
            printf("Enter item: ");
            scanf("%d", &item);

            enQueue(item);

            break;

        case '2':
            deQueue();
            
            break;
        case '3':
            printf("\nQueue: \n");

            display();
            break;
        default:
            return 0;
        }

        printf("\n---------------------------------------------------------------------\n");
    } while (1);

    return 0;
}
