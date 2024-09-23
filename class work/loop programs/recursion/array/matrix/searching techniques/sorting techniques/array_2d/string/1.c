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
        scanf("%[^\n]%*c", str);
        // scanf("%s",str);  
        printf("%s",str);
        i++;
    }
    
    return 0;
}
