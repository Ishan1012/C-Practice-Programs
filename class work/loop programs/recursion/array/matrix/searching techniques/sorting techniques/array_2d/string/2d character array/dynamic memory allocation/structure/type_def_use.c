#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int salary;
    int id;
} emp;

int main(int argc, char const *argv[])
{
    emp e1,e2;
    
    e1.salary=14000;
    e1.id=1;
    e1.salary=12000;
    e1.id=2;

    printf("%d %d: e1\n",e1.salary,e1.id);
    printf("%d %d: e2",e2.salary,e2.id);
    
    return 0;
}