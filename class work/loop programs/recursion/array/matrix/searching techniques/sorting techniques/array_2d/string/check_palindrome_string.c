#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char a[20], t[20];
    int r;

    printf("Enter string: ");
    gets(a);

    strcpy(t, a);

    strrev(t);

    r = strcmp(t, a);

    if (r == 0)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
