#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i=1,n;
    char str[100];
    
    scanf("%d",&n);
    
    while(i<=n)
    {
        gets(str);
        
        puts(str);
        i++;
    }
    
    return 0;
}
