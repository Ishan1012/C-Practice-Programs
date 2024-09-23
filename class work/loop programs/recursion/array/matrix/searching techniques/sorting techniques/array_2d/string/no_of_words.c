#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a[20];
    int i = 0, count = 0;
    printf("Enter string: ");
    gets(a);

    while (a[i] != '\0')
    {
        if (a[i] == ' ')
            count++;
        i++;
    }

    printf("%d", count + 1);

    return 0;
}
