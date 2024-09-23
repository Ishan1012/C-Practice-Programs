#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Enter basic pay: ");
    scanf("%d",&a);

    int n=a-(.4*a);
    int g=n-(.2*n);
    
    printf("Gross pay: %d",g);

    return 0;
}
