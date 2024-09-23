#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stddef.h>
#include <stdint.h>

int superDigit(char* n, int k) {
    long long int sum=0,i,count=0,temp;
    char ch,*a;
    
    if(strlen(n)==1)
        return n[0]-'0';
    
    for(i=0;i<strlen(n);i++)
    {
        ch=n[i]-'0';
        sum=sum+ch;
    }
    sum=sum*k;
    temp=sum;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    a=malloc((count+1)*sizeof(char));
    i=0;
    while(sum!=0)
    {
        a[i]=sum%10+'0';
        sum/=10;
        i++;
    }
    a[i]='\0';
    return superDigit(a,1);
}

int main()
{
    int res,k;
    char num[30];
    scanf("%s %d",num,k);

    res=superDigit(num,k);

    printf("%d",res);
    return 0;
}