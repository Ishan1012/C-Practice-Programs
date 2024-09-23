// Program ot print equation of line
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration 
    int x1,x2,y1,y2,m,c;

    // Taking input from the user
    printf("Enter x1: ");
    scanf("%d",&x1);
    printf("Enter y1: ");
    scanf("%d",&y1);
    printf("Enter x2: ");
    scanf("%d",&x2);
    printf("Enter y2: ");
    scanf("%d",&y2);

    // calculating values of slope and y-intercept
    m = (y2-y1)/(x2-x1);
    c = y1-(m*x1);

    // printing equation of line
    printf("y=%dx+%d",m,c);

    return 0;
}