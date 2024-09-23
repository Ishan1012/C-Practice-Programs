#inlcude<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
   string s;
   
   cout<<"Enter the string: ";
   getline(cin,s);
   stringstream obj(s);
   
   string temp;
   
   while(obj >> temp)
   {
     reverse(temp);
     
     cout<<temp<<" ";
   }
   
   return 0;
}
