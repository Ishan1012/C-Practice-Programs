#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[10][20], t[20];
    int i, j, n;

    printf("enter no. of strings: ");
    scanf("%d", &n);

    printf("Enter Strings: ");
    for (i = 0; i < n; i++)
        gets(a[i]);

    for (i = 0; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
            if (strcmp(a[j], a[j + 1]) > 0)
            {
                strcpy(t, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], t);
            }

    printf("Sorted array: ");

    for (i = 0; i < n; i++)
        puts(a[i]);
    return 0;
}