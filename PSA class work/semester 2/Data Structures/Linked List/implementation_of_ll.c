/* Implementation of Linked List in C */

#include <stdio.h>
#include <malloc.h>
#include <process.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;

void InsertAtBeg(int item)
{
    node *ptr;

    ptr = (node *)malloc(sizeof(node));

    ptr->data = item;
    ptr->next = NULL;
    head = ptr;
}

void InsertAtLast(int item)
{
    node *cur,*ptr;
    ptr=(node*)malloc(sizeof(node));

    ptr->data=item;

    cur=head;

    while(cur->next != NULL)
    {
        cur=cur->next;
    }

    cur->next = ptr;
    ptr->next = NULL;
}

void InsertAtPos(int item, int pos)
{
    node *ptr, *cur, *prev;
    int i;

    ptr = (node *)malloc(sizeof(node));

    ptr->data = item;

    cur = head;
    prev = NULL;

    for (i = 1; i <= pos - 1; i++)
    {
        prev = cur;
        cur = cur->next;
    }

    prev->next = cur;
    prev->next = ptr;
}

int DeleteAtBeg()
{
    int item;
    node *ptr;

    if (head == NULL)
    {
        printf("\n LL is Empty");
        return -1;
    }

    ptr = head;
    item = ptr->data;
    head = head->next;
    free(ptr);
    return item;
}

int DeleteAtLast()
{
    int item;
    node *ptr, *prev;

    if (head == NULL)
    {
        printf("\n LL is Empty");
        return -1;
    }

    ptr = head;
    prev = NULL;

    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    item = ptr->data;
    prev->next = NULL;
    free(ptr);
    return item;
}

int DeleteAtPos(int pos)
{
    int item, i;
    node *ptr, *prev;

    if (head == NULL)
    {
        printf("\n LL is Empty");
        return -1;
    }

    ptr = head;
    prev = NULL;

    for (i = 1; i <= pos - 1; i++)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    item = ptr->data;
    prev->next = ptr->next;
    free(ptr);
    return item;
}

int main(int argc, char const *argv[])
{
    char choice,choice2;

    int item,pos;

    do
    {
        printf("\n\n****MENU****\n\n");

        printf("1. Insert a node\n2. Delete a node\n");

        printf("\nEnter your choice: ");
        scanf("\n");
        scanf("%c", &choice);

        printf("Enter position: \n\
        1. Beginning\n\
        2. End\n\
        3. At position\n");

        printf("\nEnter your choice: ");
        scanf("\n");
        scanf("%c", &choice2);

        switch (choice)
        {
            case '1':
                if(choice2=='1')
                {
                    printf("Enter item: ");
                    scanf("%d",&item);

                    InsertAtBeg(item);
                }
                else if(choice2=='2')
                {
                    printf("Enter item: ");
                    scanf("%d",&item);

                    InsertAtLast(item);
                }
                else if(choice2=='3')
                {
                    printf("Enter item: ");
                    scanf("%d",&item);
                    printf("Enter position: ");
                    scanf("%d",&pos);

                    InsertAtPos(item,pos);
                }

                break;

            case '2':
                if(choice2=='1')
                {
                    item = DeleteAtBeg();

                    printf("\nItem deleted: %d",item);
                }
                else if(choice2=='2')
                {
                    item = DeleteAtLast();

                    printf("\nItem deleted: %d",item);
                }
                else if(choice2=='3')
                {
                    printf("Enter position: ");
                    scanf("%d",&pos);

                    item = DeleteAtPos(pos);

                    printf("\nItem deleted: %d",item);
                }
        }

        printf("\nWant to continue(y/n): ");
        scanf("\n");
        scanf("%c",&choice);

        printf("---------------------------------------------------------------------");
    } while (choice == 'y');

    return 0;
}
