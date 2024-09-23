/* Insertion in 1D array */
#include<stdio.h>

// Function declaration
int Insertion(int[],int,int,int);

// Driver program
int main(int argc, char const *argv[])
{
    int arr[100],n,item,pos,i;

    printf("Enter n: ");
    scanf("%d",&n);

    // Input Array Elements
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter item to be inserted: ");
    scanf("%d",&item);
    printf("Enter the position: ");
    scanf("%d",&pos);

    // To display original array
    printf("\nArray before insertion: ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    n=Insertion(arr,n,item,pos);
    
    // Array after Insertion 
    printf("\nArray after insertion: ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;
}

int Insertion(int arr[],int n,int item,int pos)
{
    int i;
    if(pos>n+1)
    {
        printf("\nInvalid position");
        return n;
    }

    // Shifting Loop
    for(i=n-1;i>=pos-1;i--)
        arr[i+1]=arr[i];
    arr[pos-1]=item;

    return n+1;
}