#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n,x,sum=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum=sum+j;
        }
    }

    printf("Answer of the series is: %d",sum);

    return 0;
}