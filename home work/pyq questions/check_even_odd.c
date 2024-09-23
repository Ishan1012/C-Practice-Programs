#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("NUMBER IS EVEN");
    if (num % 2 == 1)
        printf("NUMBER IS ODD");

    return 0;
}
