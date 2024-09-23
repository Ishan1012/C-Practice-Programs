/* Program in C to store marks in DMA */

#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <process.h>

int main(int argc, char const *argv[])
{
    int i, n1, n2=0;
    float average = 0;
    char choice;
    int *ptr;

    printf("Enter n1: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    for (i = 0; i < n1; i++)
    {
        printf("\nEnter marks: ");
        scanf("%d", ptr + i);
    }

    printf("\nWant to store more marks: ");
    choice=getch();

    if(choice=='y')
    {
        printf("\nMemory extended.\nEnter n2: ");
        scanf("\n");
        scanf("%d",&n2);

        ptr=realloc(ptr,(n1+n2)*sizeof(int));

        for(i=n1;i<n1+n2;i++)
        {
            printf("\nEnter marks: ");
            scanf("%d",ptr+i);
        }
    }

    printf("\nTotal array: ");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",*(ptr+i));
    }

    for(i=0;i<n1+n2;i++)
    {
        average+=*(ptr+i);
    }
    average/=(n1+n2);

    printf("\nAverage = %f",average);

    free(ptr);

    return 0;
}
