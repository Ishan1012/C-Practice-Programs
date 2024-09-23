#include<stdio.h>

void reverseString(char *s,char *r,int i,int n)
{
    if(i<0)
    {
        r[1]='\0';
        return;
    }
    else
    {
        r[n-i]=s[i-1];
        i--;
        reverseString(s,r,i,n);
    }
}

int main(int argc, char const *argv[])
{
    int s[100],r[100],n;

    printf("Enter string: ");
    scanf("%[^\n]s",&s);

    reverseString(s,r,0,n);

    printf("Result=%s",r);

    return 0;
}
