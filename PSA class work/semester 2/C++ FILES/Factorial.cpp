/* Program to print factorial of a number */
#include<iostream>
using namespace std;

// Driver code
int main(int argc, char const *argv[])
{   
    // Local variable declaration
    int n;
    long factorial=1.0;

    // Taking number from the user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Checking whether the number is positive or not
    if(n<0)
        cout << "Error! Factorial of a negative number does not exist.";
    else
    {   
        // Calculating the factorial of number
        for(int i=1;i<=n;i++)
        factorial*=i;

        // Printing the factorial of that number
        cout << "Factorial of " << n << " = " << factorial;
    }
    return 0;
}   
// End of main function