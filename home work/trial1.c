#include <stdio.h>
int fun(int);

int main()
{
    int a,t;
    printf("Enter a number");
    scanf("%d",&a);
    t=fun(a);
    printf("%d",t);
    return 0;
}


int fun(int number)
{
    int n,paths=0;
    while(number>0)
    {
        n=number%10;
        switch(n)
        {
            case 0:
            case 5:
            case 6:
            case 7:
            case 9:
            paths+=1;break;
            case 8:
            paths+=2;
        }
        number=number/10;
    }
    return paths;
}