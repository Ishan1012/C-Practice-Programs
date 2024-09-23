/* Illustration of map in c++ */
/* Time complexity for every operation: O(log(n)) */
#include <iostream>
#include <map>
#include <iterator>
using namespace std;

// Function declaration
void print(map<int, string> &mp)
{
    // Declaring an iterator
    map<int, string>::iterator it;

    // Printing values of map using iterator
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}

// Driver code
int main()
{
    // Declaring a map(mp)
    map<int, string> mp;

    mp[10] = "Abhishek";
    mp[1] = "Ramesh";
    mp[5] = "Deepak";

    // Function call
    print(mp);

    // Using insert variable in map
    mp.insert({8, "Amit"});
    mp.insert({12, "Rohit"});

    // Printing the map
    cout << "\nMap after insertion:\n";
    print(mp);

    // Appending any index of map
    mp[5] = "XYZ";

    // Printing the map
    cout << "\nMap after overwriting:\n";
    print(mp);

    // deleting
    mp.erase(5);

    // Printing the map
    cout << "\nMap after erase:\n";
    print(mp);

    // Declaring an iterator
    map<int,string>::iterator it;

    // Using find function with complexity O(log(n))
    it=mp.find(2);
    
    if(it!=mp.end())
    {
        cout<<"\nValue exist! ";
    }
    else
    {
        cout<<"\nValue does not exist! ";
    }

    // Default insertion
    mp[3];

    // Printing the map
    cout << "\nMap after default insertion:\n";
    print(mp);
}
// End of main function 