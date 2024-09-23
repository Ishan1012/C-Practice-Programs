#include<stdio.h>

struct hotel
{
    char name[10];
    int age;
    char city[20];
    int period;
};

int main(int argc, char const *argv[])
{
    struct hotel h[100];
    int n,i;

    printf("Enter the number of customers you want to input: ");
    scanf("%d",&n);
    printf("---------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Customer name: ");
        scanf("%s",h[i].name);
        printf("Enter age: ");
        scanf("%d",&h[i].age);
        printf("Enter city: ");
        scanf("%s",h[i].city);
        printf("Enter period of stay: ");
        scanf("%f",&h[i].period);
        printf("---------------------------------------------------------\n");
    }

    printf("Details of customers:\n\n");
    printf("NAME \t\tAGE  CITY        PERIOD OF STAY\n");
    for(i=0;i<n;i++)
    {
        printf("%14s %4d %10s  %d\n",
        h[i].name,h[i].age,h[i].city,h[i].period);
    }

    return 0;
}
