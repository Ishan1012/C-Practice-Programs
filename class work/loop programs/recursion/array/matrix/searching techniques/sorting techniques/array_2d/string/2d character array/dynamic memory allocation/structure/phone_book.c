#include<stdio.h>
#include<string.h>

struct name
{
    char fnam[20];
    char lnam[20];
};

struct phone_entry
{
    struct name pnam;
    char mno[10];
};

int main(int argc, char const *argv[])
{
    struct phone_entry pno={"Anil","Kumar"};
    
    printf("Name: %s %s",pno.pnam.fnam,pno.pnam.lnam);
    return 0;
}