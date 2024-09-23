/* Program to find the frequency of each element(Brute force approach) */
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout<<"Enter the length of array: ";
    cin>>n;

    int arr[n];
    bool visited[n];

    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        if(visited[i]==true)
        continue;
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
                visited[j]=true;
            }
        }
        visited[i]=true;
        cout<<arr[i]<<"-->"<<count;
    }

    return 0;
}
