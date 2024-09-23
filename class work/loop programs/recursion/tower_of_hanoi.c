/* Program for tower of hanoi problem */
#include<stdio.h>

// Function declaration
void tower_of_hanoi(int,char,char,char);

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n;

    // Taking number of disk from the user
    printf("Enter no of disks: ");
    scanf("%d",&n);
    
    // Function call
    tower_of_hanoi(n,'A','B','C');
    return 0;
}

// Function definition
void tower_of_hanoi(int n,char s,char i,char e)
{
    // Recursive case
    if(n!=0)
    {
        // Recursive call 1
        tower_of_hanoi(n-1,s,e,i);

        printf("%c -> %c\n",s,e);

        // Recursive call 2
        tower_of_hanoi(n-1,e,i,s);
    }
}