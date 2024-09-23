#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3], j, i, sum = 0;

    printf("Enter elements for 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum += a[i][j];

    printf("Sum=%d", sum);

    return 0;
}
