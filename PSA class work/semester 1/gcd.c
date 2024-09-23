#include<stdio.h>

int main(int argc, char const *argv[])
{
    int m,n,rem;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);
    while(1)
    {
        rem=m%n;
        if(rem==0)
        break;
        m=n;
        n=rem;
    }
    printf("GCD: %d",n);
    return 0;
}
