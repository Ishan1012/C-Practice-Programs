#include <stdio.h>

struct employee
{
    char name[20];
    int age;
    float salary;
};

int main()
{
    FILE *fp;
    struct employee emp;

    fp = fopen("employee.txt", "w+");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", emp.name);

    printf("Enter age: ");
    scanf("%d", &emp.age);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    fprintf(fp, "%s %d %.2f\n", emp.name, emp.age, emp.salary);

    fclose(fp);

    return 0;
}