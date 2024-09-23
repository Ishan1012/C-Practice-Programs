// Conditional Statements in C
#include<stdio.h>

// Driver code
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    // printing name of numbers between one to nine
    if(n>=1 && n<=9)
    {
        (n==1)?printf("one"):
        (n==2)?printf("two"):
        (n==3)?printf("three"):
        (n==4)?printf("four"):
        (n==5)?printf("five"):
        (n==6)?printf("six"):
        (n==7)?printf("seven"):
        (n==8)?printf("eight"):
        (n==9)?printf("nine"):n>9;
    }
    // If the number is greater than nine then print "Greater than 9"
    else
        printf("Greater than 9");
    
    return 0;
}
