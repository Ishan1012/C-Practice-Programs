#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    FILE *fptr;

    fptr = fopen("newfile.txt", "r");

    while (ch != EOF)
    {
        ch=getc(fptr);
        putchar(ch);
    }

    fclose(fptr);

    return 0;
}
