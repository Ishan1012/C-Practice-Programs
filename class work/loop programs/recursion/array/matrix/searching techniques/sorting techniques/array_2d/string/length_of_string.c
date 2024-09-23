#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[20];
    int i = 0, count = 0;
    printf("Enter string: ");
    gets(a);

    while (a[i] != '\0')
    {
        count++;
        i++;
    }

    printf("%d", count);

    return 0;
}
