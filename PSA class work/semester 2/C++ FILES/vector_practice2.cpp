/* Find vector elements which are smaller than its adjuscent neighbour
   (find Valley points)

   eg: arr[]={2, 5, 12, 6, 20, 32, 17, 25}
   ans: 6,17
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

// function declaration
vector<int> countValleys(vector<int> arr)
{
    // Declaring an object of vector<int>
    vector<int> result;

    // Logic to find the number of valleys
    for (int i = 1; i < arr.size() - 1; i++)
    {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
        {
            result.push_back(arr[i]);
        }
    }

    return result;
}

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n;

    // Local object declaration
    vector<int> vec, result;

    // Taking length of vector from the user
    cout << "Enter length of vector: \
                                    "; // using slash for new line
    cin >> n;

    // Taking elements of the vector from the user
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    // Function call
    result = countValleys(vec);

    // Printing the valleys in the string
    for (int i : result)
    {
        cout << i << ", ";
    }

    return 0;
}
// End of Driver code