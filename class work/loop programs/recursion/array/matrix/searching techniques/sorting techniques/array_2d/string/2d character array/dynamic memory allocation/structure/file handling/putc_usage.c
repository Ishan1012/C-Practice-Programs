#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char ch;
    fp=fopen("putfile.txt","w");
    for(ch='A';ch<='Z';ch++)
        putc(ch,fp);

    fclose(fp);
    return 0;
}
