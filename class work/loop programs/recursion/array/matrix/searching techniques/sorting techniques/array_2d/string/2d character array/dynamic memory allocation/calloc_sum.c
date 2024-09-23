#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *a, i, s = 0, n;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    a = (int *)calloc(n, sizeof(int));

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", a + i);

    for (i = 0; i < n; i++)
        s += *(a + i);

    printf("Sum=%d", s);
    return 0;
}
