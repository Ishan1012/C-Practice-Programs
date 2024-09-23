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

    printf("Sum=%d\n", s);

    a=(int*)realloc(a, 2 * n * sizeof(int));

    s = 0;

    printf("Enter elements:\n");
    for (i = 0; i < 2 * n; i++)
        scanf("%d", a + i);

    for (i = 0; i < 2 * n; i++)
        s += *(a + i);

    printf("New Sum=%d", s);

    free(a);

    return 0;
}
