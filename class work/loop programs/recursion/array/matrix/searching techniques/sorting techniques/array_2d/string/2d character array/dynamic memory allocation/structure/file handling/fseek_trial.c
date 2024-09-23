#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("sample.txt","w+");

    fputs("Welcome to world of programming",fptr);

    fseek(fptr,11,SEEK_SET);

    fputs("C programming language",fptr);

    return 0;
}
