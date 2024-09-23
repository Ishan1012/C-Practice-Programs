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

    while (obj >> word)
    {
        // Taking a temp variable 
        string temp2;

        // Using another iterator ot get each character of the word
        for(auto i:word)
        {
            temp2=i+temp2;          // H -> eH -> leH -> lleH -> olleH
        }

        // Printing the reverse word
        cout<<temp2<<" ";
    }

    return 0;
}
// End of Driver code