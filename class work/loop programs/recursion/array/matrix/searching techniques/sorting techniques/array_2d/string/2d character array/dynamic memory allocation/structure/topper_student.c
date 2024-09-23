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
    struct student s[50];
    int n,i,max=0,t=0;

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
        if(s[i].per>max)
        {
            max=s[i].per;
            t=i;
        }
    }

    printf("Name of Topper student: %s",s[t].name);

    return 0;
}
