#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,num,c,d,sum;
    printf("Enter the number: ");
    scanf("%d",&n);

    num=n;
    c=0;
    while(num!=0)
    {
        c++;
        num=num/10;
    }

    sum=0;
    num=n;
    while(num!=0)
    {
        d=num%10;
        sum=sum+pow(d,c);
        num=num/10;
    }

    if(sum==n)
    printf("Armstrong number");
    else
    printf("Not Armstrong number");
    return 0;
}
