/* Program to print words of string in reverse order */
#include <iostream>
#include <sstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    // Making string object
    string s;

    // Taking string from the user
    cout << "Enter the string: ";
    getline(cin, s);

    // Making object of string stream
    stringstream obj(s);

    // Making an iterator of string
    string word;

    // To find each word of the string
    while (obj >> word)
    {   
        // Using in-built reverse function for the string object
        reverse(word.begin(),word.end());

        // Printing the reverse word
        cout<<word<<" ";
    }

    return 0;
}
// End of Driver code