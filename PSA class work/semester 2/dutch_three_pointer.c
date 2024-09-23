/* Program to solve Dutch National flag problem using Three pointer approach */
#include<stdio.h>

// Function declaration
void swap(int*,int*);
void threePointerTraversing(int[],int,int);

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n,i,arr[100],temp;

    // Taking value from the user
    printf("Enter n: ");
    scanf("%d",&n);

    // Taking elements of array from the user
    printf("Enter the elements(0,1,2): ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    // Three pointer approach to sort the array
    threePointerTraversing(arr,0,n-1);

    // Printing sorted array
    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
        
    return 0;
}

// Function definition
void swap(int* a,int* b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

// Function definition
void threePointerTraversing(int arr[],int low,int high)
{
    int mid=low;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(&arr[low],&arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==2)
        {
            swap(&arr[high],&arr[mid]);
            high--;
        }
        else
            mid++;
    }
}