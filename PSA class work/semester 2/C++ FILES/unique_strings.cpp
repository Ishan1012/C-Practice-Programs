/* Problem to find the unique strings and their frequency. */
/* Time complexity: O(log(n)) */
#include<iostream>
#include<map>
using namespace std;

// Function declaration
void print(map<string,int> &mp)
{
    // Declaration of iterator
    map<string,int>::iterator it;

    // Printing the values of map 
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<(*it).first<<" --> "<<(*it).second<<endl;
    }
}

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n;

    // Declaring a map(mp)
    map<string,int> mp;

    // Taking total numebr of strings from the user
    cout<<"Enter the number of strings: ";
    cin>>n;

    // Loop to take different values of string from user
    for(int i=0;i<n;i++)
    {
        // Taking string from user
        string s;
        cout<<"Enter the string: ";
        cin>>s;

        // Inserting all the strings into the map
        mp[s]++;     /* will not produce error as 
                        the value will be auto initialized,
                        next time the value will be 
                        iterated */
    }

    // Printing the Unique strings
    cout<<"\nUnique strings and frequency:\n";
    print(mp);  //function call

    return 0;
}
// End of main function