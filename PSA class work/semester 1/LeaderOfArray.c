//Leader of array
#include<stdio.h>

//Brute force approach----> O(n2)
void Leader(int arr[],int n)
{
    int i,j,flag;       //local variables
    for(i=0;i<n-1;i++)
    {
        //To find the next max
        flag=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag=0;
                break;
            }
        }
        //print the leader
        if(flag==1)
        {
            printf("%d,",arr[i]);
        }
    }

}

//Driver code
int main(int argc, char const *argv[])
{
    int arr[100],n,i;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    Leader(arr,n);   //fun call

    return 0;
}
