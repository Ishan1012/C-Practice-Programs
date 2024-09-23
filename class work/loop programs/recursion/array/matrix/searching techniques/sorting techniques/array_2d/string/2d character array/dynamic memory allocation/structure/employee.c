#include<stdio.h>
#include<string.h>

struct employee
{
    int eno;
    char ename[20];
    int salary;
} emp[10];

int main(int argc, char const *argv[])
{
    int n,i,high;

    printf("Enter the number of students you want to input: ");
    scanf("%d",&n);
    printf("---------------------------------------------------------\n");
    printf("Enter details for %d employee:\n",n);
    printf("---------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Employee number: ");
        scanf("%s",emp[i].eno);
        printf("Enter Employee name: ");
        scanf("%d",emp[i].ename);
        printf("Enter Salary: ");
        scanf("%f",&emp[i].salary);
        printf("---------------------------------------------------------\n");
    }

    high=emp[0].salary;
    for(i=0;i<n;i++)
    if(emp[i].salary>high)
    high=emp[i].salary;

    printf("Details of employee with highest salary:\n\n");
    printf("EMPNO   NAME          SALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t %s \t %d\n",
        emp[i].eno,emp[i].ename,emp[i].salary);
    }

    return 0;
}
