// Program to tell the gross salary of the employee
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    float basic_salary=0,da=0,hra=0,gross_salary=0;

    // Taking basic salary from the user
    printf("Enter the basic salary: ");
    scanf("%f",&basic_salary);

    // Calculating Dearness allowance and House rent allowance
    da=basic_salary*0.2;
    hra=basic_salary*0.1;

    // Calculating gross salary of the employee
    gross_salary=basic_salary+da+hra;

    printf("Gross salary is %.2f",gross_salary);
    
    return 0;
}