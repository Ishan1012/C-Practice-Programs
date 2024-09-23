#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks: ");
        scanf("%d",&a[i]);
    }

    int sum=0;

    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    
    int pr=sum/5;

    printf("Sum: %d\n",sum);
    printf("Percentage: %d percent",pr);

    return 0;
}