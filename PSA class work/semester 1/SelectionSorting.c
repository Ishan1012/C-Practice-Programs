//Selection Sort
#include<stdio.h>

//Function definition
void SelectionSort(int arr[],int n)
{
    int i,j,temp,loc,min;       //local variables
    for(i=0;i<n;i++)
    {
        //To find the next min
        min=arr[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                loc=j;
            }
        }
        //swap arr[i] <---> arr[loc]
        if(i!=loc)
        {
            temp=arr[i];
            arr[i]=arr[loc];
            arr[loc]=temp;
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

    printf("\nArray before Sorting:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    SelectionSort(arr,n);   //fun call

    printf("\nArray after Sorting:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
