#include <stdio.h>

void mystrcpy(char *t, char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        t[i] = s[i];
        i++;
    }
    t[i] = '\0';
}

int main(int argc, char const *argv[])
{
    char s[] = "PSIT", t[20];

    mystrcpy(t, s);
    puts(t);
    return 0;
}
