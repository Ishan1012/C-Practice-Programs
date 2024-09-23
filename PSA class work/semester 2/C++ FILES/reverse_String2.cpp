/* Program to print words of string in reverse order */
#include <iostream>
#include <sstream>
#include <string>
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
        // Declaration of local object of a string
        string rev="";
        // Initializing the position i with length()-1
        int i=word.length()-1;
        // Traversing each word of the string
        while(i>=0)
        {
            // adding elements at the end of the string
            rev+=word[i];
            i--;
        }

        // Printing the reverse word
        cout<<rev<<" ";
    }

    return 0;
}
// End of Driver code