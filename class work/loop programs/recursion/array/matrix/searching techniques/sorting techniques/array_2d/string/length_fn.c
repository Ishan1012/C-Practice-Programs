#include <stdio.h>

int mystrlen(char *a)
{
    int i = 0;

    while (a[i] != '\0')
        i++;

    return i;
}

int main(int argc, char const *argv[])
{
    char s[] = {"Kanpur"};

    printf("%d", mystrlen(s));
    return 0;
}
