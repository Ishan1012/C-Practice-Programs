/* Sort the stack using another temporary stack */

#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> input,stack,tempStack;
    int n;
    
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        input.push(temp);
    }

    stack=input;

    while(!input.empty())
    {
        int temp=input.top();
        input.pop();

        while(!tempStack.empty() && tempStack.top()>temp)
        {
            int temp2=tempStack.top();
            tempStack.pop();
            input.push(temp2);
        }

        tempStack.push(temp);
    }

    cout<<"\nOriginal Stack: ";
    while(!stack.empty())
    {
        cout<<stack.top()<<"\n";
        stack.pop();
    }

    cout<<"\nSorted Stack: ";
    while(!tempStack.empty())
    {
        cout<<tempStack.top()<<"\n";
        tempStack.pop();
    }

    return 0;
}
