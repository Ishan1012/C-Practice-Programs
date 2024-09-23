#include<stdio.h>

struct node
{
    int value;
    struct node *next;
};

int main()
{
    int n,num,temp;
    struct node *head=NULL,*newnode=NULL;

    head=malloc(sizeof(struct node));
    newnode=malloc(sizeof(struct node));

    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        scanf("%d",&num);

        head->value = num;
        head->next=newnode;
        n--;
    }

    while(head)
    {
        printf("%d\n",head->value);

        head=head->next;
    }

    return 0;
}