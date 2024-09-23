#include <stdio.h>

void mystrrev(char *a)
{
    int i = 0, j = 0;
    char t;
    while (a[i] != '\0')
        i++;
    i--;
    while (j < i)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        j++;
        i--;
    }
}

int main(int argc, char const *argv[])
{
    char s[] = {"Kanpur"};

    mystrrev(s);

    printf("%s", s);
    return 0;
}