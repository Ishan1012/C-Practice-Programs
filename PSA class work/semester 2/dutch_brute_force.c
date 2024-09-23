/* Program to solve Dutch National Flag Problem by Brute force approach*/
#include<stdio.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,i,arr[100],zeros=0,ones=0,twos=0,k=0;

    // Taking value from user
    printf("Enter n: ");
    scanf("%d",&n);

    // Taking elements of the array from the user
    printf("Enter the elements(0,1,2): ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    // Counting all zeros, ones and twos
    for(i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 0:zeros++;break;
            case 1:ones++;break;
            case 2:twos++;
        }
    }

    // Filling the array the counted frequency of the variables
    for(i=1;i<=zeros;i++)
    {
        arr[k++]=0;
    }
    for(i=1;i<=ones;i++)
    {
        arr[k++]=1;
    }
    for(i=1;i<=twos;i++)
    {
        arr[k++]=2;
    }

    // Printing the sorted array
    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
