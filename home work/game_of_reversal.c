#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n,len,end,i;
    char S[1001];
    
    scanf("%d",&n);
    
    while(n>0)
    {
        getchar();
        fgets(S, 1001, stdin);
        
        len=strlen(S);
        end=len-2;
        printf("%c",S[len-1]);
        for(i=end;i>=1;i--)   {
            if(S[i]==' ' || i==1)   {
                int start;
                if(i==1) 
                    start=1;
                else 
                    start=i+1;
                for(int j=start;j<=end;j++)  {
                    printf("%c",S[j]);
                }
                end=i-1;
                if(end==0) break;
                printf(" ");
            }
        }
        printf("%c",S[0]);
        printf("\n");
        n--;
    }
    return 0;
 }