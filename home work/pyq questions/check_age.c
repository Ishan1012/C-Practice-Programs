#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ar[100], i, count = 0;

    printf("Enter age of 100 people: ");
    for (i = 0; i < 100; i++)
        scanf("%d", ar + i);

    for (i = 0; i < 100; i++)
    {
        if (i < 50 && i > 60)
            continue;
        count++;
    }

    printf("Number of people in age group of 50 to 60 = %d", count);
    return 0;
}
