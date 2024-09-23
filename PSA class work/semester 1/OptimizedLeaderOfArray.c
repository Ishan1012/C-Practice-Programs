#include<stdio.h>

void FindLeaders(int[],int);

int main(int argc, char const *argv[])
{
    int arr[100],i,n;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    FindLeaders(arr,n);
    return 0;
}

void FindLeaders(int arr[],int n)
{
    int i,leader;
    printf("Leader Elements:\n");

    leader=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>leader)
        {
            printf("%d ",leader);
            leader=arr[i];
        }
    }
    printf("%d",leader);
}