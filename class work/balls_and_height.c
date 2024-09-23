/* Program for balls and the height */
#include<stdio.h>
#include<math.h>

// Driver code
int main()
{
    // Local variable
    int n,h;
    float b;

    // Taking number of balls from the user
    printf("Enter the number of balls: ");
    scanf("%d",&n);

    // Calculating height of the tower
    b=(2*n)+0.25;
    h=sqrt(b)-0.5;

    // Printing height of the tower
    printf("Height is: %d",h);

    return 0;
}