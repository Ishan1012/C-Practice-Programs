#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    int num=0;
    stack.push(num);
    stack.pop();
    stack.pop();
    cout<<"Stack size="<<stack.size();
    cout<<"\nCurrent status of stack is: \n";
    while(!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }

    return 0;
}