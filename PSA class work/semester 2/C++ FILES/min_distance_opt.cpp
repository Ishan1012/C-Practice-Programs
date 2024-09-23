/* Program to find the minimum distance between two values in an array (optimized approach) */
#include <iostream>
#include <limits.h> // Used for INT_MAX
#include <stdlib.h> // Used for abs()
using namespace std;

// Driver code
int main(int argc, char const *argv[])
{
    // Declaring and initializing local variables
    int x, y, n, idx1 = -1, idx2 = -1, dis = INT_MAX;

    // Taking length of array from the user
    cout << "Enter the length of array" << endl;
    cin >> n;

    // Declaring the array arr
    int arr[n];

    // Taking elements of array from the user
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Taking two numbers from the user
    cout << "Enter the value of x and y: ";
    cin >> x;
    cin >> y;

    // Optimized approach
    for (int i = 0; i < n; i++)
    {
        // Check if x is changed
        if (arr[i] == x)
            idx1 = i;
        // Check if y is changed
        else if (arr[i] == y)
            idx2 = i;
        // Find minimum distance
        if (idx1 != -1 && idx2 != -1)
            dis = min(dis, abs(idx1 - idx2));
    }

    // Printing the minimum distance
    if (idx1 != -1 && idx2 != -1)
        cout << "Minimum distance between " << x << " and " << y << " is " << dis;
    else
        cout << "Pair of elements does not exist!";

    return 0;
}
// End of main function