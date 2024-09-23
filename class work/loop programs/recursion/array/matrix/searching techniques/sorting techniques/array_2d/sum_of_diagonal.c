#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3], i, j, sum = 0;

    printf("Enter array elements: ");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for(i=0;i<3;i++)
    sum+=a[i][i];

    printf("Sum=%d",sum);
    return 0;
}
