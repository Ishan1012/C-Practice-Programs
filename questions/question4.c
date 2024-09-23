#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Enter temperature(in *F): ");
    scanf("%d",&a);

    int f=(5*(a-32))/9;

    printf("The temperature in *C: %d",f);
    return 0;
}