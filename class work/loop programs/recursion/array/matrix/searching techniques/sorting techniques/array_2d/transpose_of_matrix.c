#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3], i, j, ta[3][3];

    printf("Enter array elements:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            ta[i][j] = a[j][i];

    printf("Transpose:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", ta[i][j]);
        printf("\n");
    }

    return 0;
}
