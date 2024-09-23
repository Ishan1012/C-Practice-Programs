#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    char ch;

    fptr=fopen("E:\\Programming Files\\C FILES AND PROJECTS\\C FILES\\class work\\loop programs\\recursion\\array\\matrix\\searching techniques\\sorting techniques\\array_2d\\string\\2d character array\\dynamic memory allocation\\structure\\file handling\\putfile.txt","r");

    while(ch=getc(fptr)!=EOF)
    printf("%c",&ch);

    fclose(fptr);

    return 0;
}
