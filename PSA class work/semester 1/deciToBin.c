#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num,rem,i=0,bin=0;
    printf("Enter decimal number: ");
    scanf("%d",&num);

    while (num!=0)
    {
        rem=num%2;
        bin=bin+(rem*pow(10,i));
        num=num/2;
        i++;
    }

    printf("Binary: %d",bin);
    
    return 0;
}
