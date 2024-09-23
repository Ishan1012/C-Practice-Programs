#include <stdio.h>

void pattern1();
void pattern2();
void pattern3();
void pattern4();

int main(int argc, char const *argv[])
{
    printf("=> Pattern 1: \n");
    pattern1();
    printf("=> Pattern 2: \n");
    pattern2();
    printf("=> Pattern 3: \n");
    pattern3();
    printf("=> Pattern 4: \n");
    pattern4();
    return 0;
}

void pattern1()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%c", j + 64);
        printf("\n");
    }
}

void pattern2()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

void pattern3()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i - 1; j++)
            printf(" ");
        for (j = 4 - i + 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}

void pattern4()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%c", j+64);
        for (j = i - 1; j >= 1; j--)
            printf("%c", j+64);
        printf("\n");
    }
}