#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int a,m,f,i,c;

    printf("Enter distance(in km): ");
    scanf("%d",&a);

    m=a*1000;
    f=m*3.28084;
    i=f*12;
    c=m*100;

    printf("meters: %dm\n",m);
    printf("feets: %dft\n",f);
    printf("inches: %din\n",i);
    printf("centimeters: %dcm\n",c);

    return 0;
}
