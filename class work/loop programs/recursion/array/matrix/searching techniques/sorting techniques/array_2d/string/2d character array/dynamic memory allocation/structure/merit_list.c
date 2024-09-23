#include<stdio.h>

struct student
{
    char name[10];
    int age;
    float per;
    char city[20];
};

int main(int argc, char const *argv[])
{
    struct student s[50],t;
    int n,i,j;

    printf("Enter the number of students you want to input: ");
    scanf("%d",&n);
    printf("---------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("Enter student name: ");
        scanf("%s",s[i].name);
        printf("Enter age: ");
        scanf("%d",&s[i].age);
        printf("Enter percentage: ");
        scanf("%f",&s[i].per);
        printf("Enter city: ");
        scanf("%s",s[i].city);
        printf("---------------------------------------------------------\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(s[j].per>s[j+1].per)
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }

    printf("Merit List:\n\n");
    printf("NAME \t\tAGE  PERCENTAGE  CITY\n");
    for(i=0;i<n;i++)
    {
        printf("%14s %4d %11.2f  %s\n",
        s[i].name,s[i].age,s[i].per,s[i].city);
    }

    return 0;
}
