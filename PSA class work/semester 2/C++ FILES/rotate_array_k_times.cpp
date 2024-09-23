/* Program to rotate array k times using brute force approach */
#include<iostream>
using namespace std;

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,i,k,temp;

    // Taking value from user
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;

    // Updating the value of k 
    k%=n;

    // Declaration of array arr[]
    int arr[n];

    // Taking elements of the array from the user
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
        cin>>arr[i];

    // Rotating the array in clockwise direction
    while(k-->0)
    {
        temp=arr[n-1];
        for(i=n-1;i>0;i--)
            arr[i]=arr[i-1];
        arr[i]=temp;
    }

    // Printing the resultant array
    cout<<"Resultant array: ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}   
// End of main function