#include<stdio.h>
#include<conio.h>

// armstrong number program

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter number ");
    scanf("%d",&a);
    int n=a;

    int r=0,c;
    while (n>0)
    {
        int d=n%10;
        c=d*d*d;
        r=r+c;
        n=n/10;
    }
    
    if(a==r)
    {
        printf("It is an armstong number. ");
    }
    else
    {
        printf("It is not an armstrong number. ");
    }
    
    return 0;
}
