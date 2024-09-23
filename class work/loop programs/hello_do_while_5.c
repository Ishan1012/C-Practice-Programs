/* Program to print Hello World using do-while loop */
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int c=0;

    // Printing Hello World 5 times
    do
    {
        printf("Hello World\n");
        c++;
    } while (c<5);

    return 0;
}
