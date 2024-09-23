/* A sample code snippet from continue keyword */
#include <stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int i;

    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
            continue;
        printf("%d ", i);
    }
    return 0;
}
