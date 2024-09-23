#include <stdio.h>

void mystrcat(char *t, char *s)
{
    int i = 0, j = 0;

    while (t[i] != '\0')
        i++;
    while (s[j] != '\0')
    {
        t[i] = s[j];
        i++;
        j++;
    }
    t[i] = '\0';
}

int main(int argc, char const *argv[])
{
    char s[] = "kanpur", t[20] = "PSIT";

    mystrcat(t, s);
    puts(t);
    return 0;
}
