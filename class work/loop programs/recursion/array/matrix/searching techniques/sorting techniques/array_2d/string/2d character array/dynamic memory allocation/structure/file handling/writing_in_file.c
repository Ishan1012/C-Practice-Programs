#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    FILE *file;

    file = fopen("newfile.txt", "w");
    for (i = 'A'; i <= 'Z'; i++)
        fprintf(file, "%c ", i);
    fclose(file);

    return 0;
}
