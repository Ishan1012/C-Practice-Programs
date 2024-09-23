/*  C++ program to check whether number in a vector can be 
    arranged so that each number appears exactly once in a 
    consecutive list of numbers. Returns true otherwise false
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

// Function definition
bool isUnique(vector<int> arr)
{
    // Sorting the given vector using stl algorithm function
    sort(arr.begin(),arr.end());

    // Logic to check whether all elements of given vector is unique or not
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i+1]-arr[i]==0)
            return false;
    }

    return true;
}

// Driver code
int main(int argc, char const *argv[])
{   
    // Local variable declaration
    int n;
    vector<int> arr;

    // Taking length of vector from the user
    cout<<"Enter length of the vector: ";
    cin>>n;

    // Taking the elements of vector from the user
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    // Printing whether the given vector is unique or not
    if(isUnique(arr))
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
