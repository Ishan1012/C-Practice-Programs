/* Program to check whether a number is prime or not */
#include <iostream>
using namespace std;

// Function declaration
int prime(int);

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n;

    // Taking value from user
    cout << "Enter the number: ";
    cin >> n;

    // Printing whether the number is prime or not
    if (prime(n))
        cout << n << " is a Prime number" << endl;
    else
        cout << n << " is not a Prime number" << endl;

    return 0;
}   
// End of main function 

// Function defintion
int prime(int n)
{   
    // Checking whether the number is prime or not
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}