#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[] = "kanpur";
    int i;

    while (a[i] != '\0')
    {
        printf("%c", a[i]);
        i++;
    }

    return 0;
}
