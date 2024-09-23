/* Deletion in 1D array */
#include<stdio.h>

// Function declaration
int Deletion(int[],int,int);

// Driver program
int main(int argc, char const *argv[])
{
    int arr[100],n,pos,i;

    printf("Enter n: ");
    scanf("%d",&n);

    // Input Array Elements
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter the position: ");
    scanf("%d",&pos);

    // To display original array
    printf("\nArray before deletion: ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    n=Deletion(arr,n,pos);  // function call
    
    // Array after Deletion 
    printf("\nArray after deletion: ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;
}

int Deletion(int arr[],int n,int pos)
{
    int i,item;
    if(pos>n)
    {
        printf("\nInvalid position\nDeletion is not possible");
        return n;
    }

    item=arr[pos-1];    // copy
    // Backward shifting Loop
    for(i=pos;i<n;i++)
        arr[i-1]=arr[i];
        
    printf("\nDeleted Item: %d",item);

    return n-1;
}