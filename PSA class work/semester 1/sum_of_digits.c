#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,d,sum=0;
    printf("Enter the number: ");
    scanf("%d",num);

    while (num!=0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    
    printf("Sum of digits = %d",sum);

    return 0;
}
