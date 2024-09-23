#include<stdio.h>

int main(int argc, char const *argv[])
{
    long long int lr,ur;
    printf("Enter lower and upper range: ");
    scanf("%lld %lld",&lr,&ur);

    check(lr,ur);

    return 0;
}

int check(int lr,int ur)
{
    long long int n=lr,nc2,i;

    if(lr>ur)
    return 0;

    if(lr>1)
    {
        n=i;
        nc2 = (n * (n - 1)) / 2;

        if (nc2 % n == 0 || nc2 == 1)
        {
            printf("%d,",n);
            return check(lr++,ur);
        }
    }

    return 0;
}
