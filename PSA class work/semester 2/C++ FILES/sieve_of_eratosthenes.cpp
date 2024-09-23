/* Program for sieve of eratosthenes */
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n;

    // Taking range from user
    cout << "Enter the range: ";
    cin >> n;

    // Declaration of boolean array
    bool Prime[n + 1];

    // Initializing boolean array
    memset(Prime,true,sizeof(Prime));

    // Inplementing sieve of eratosthenes
    Prime[0] = Prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (Prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                Prime[j] = false;
        }
    }

    // Printing prime numbers 
    for (int i = 0; i <= n; i++)
    {
        if (Prime[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}   
// End of main function