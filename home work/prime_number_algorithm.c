#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int n, nc2;
    printf("Enter number: ");
    scanf("%lld", &n);

    if (n > 1)
    {
        nc2 = (n * (n - 1)) / 2;

        if (nc2 % n == 0 || nc2 == 1)
            printf("Prime");
        else
            printf("Not Prime");
    }

    return 0;
}

/*
AKS triangle 
          
         2
        3 3
       4 6 4
      5 10 10 5
     6 15 20 15 6
    7 21 35 35 21 7
   and so on
*/