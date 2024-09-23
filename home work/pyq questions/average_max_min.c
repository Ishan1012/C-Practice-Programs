#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ar[10], i, sum = 0, avg, min, max = 0;

    printf("Enter the numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", ar + i);

    min = ar[0];

    for (i = 0; i < 10; i++)
    {
        sum = sum + ar[i];
        if (ar[i] < min)
            min = ar[i];
        if (ar[i] > max)
            max = ar[i];
    }

    avg = sum / 10;

    printf("Average=%d\nMinimum=%d\nMaximum=%d", avg, min, max);

    return 0;
}
