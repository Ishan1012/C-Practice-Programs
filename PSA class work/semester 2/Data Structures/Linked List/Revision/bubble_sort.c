/* Implementing bubble sort using dynamic array */

#include<stdio.h>
#include<malloc.h>

void bubbleSort(int *ptr,int n)
{
    int temp,i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int i, n;
    int *ptr;

    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("\nEnter elements: ");
        scanf("%d", ptr + i);
    }

    printf("\nOriginal Array: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }

    bubbleSort(ptr,n);

    printf("\nSorted Array: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }

    free(ptr);

    return 0;
}
