#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int l,b,r;

    // Rectangle

    printf("Rectangle: \n");
    printf("Length: ");
    scanf("%d",&l);
    printf("Breadth: ");
    scanf("%d",&b);

    long peri=2*(l+b);
    long area=l*b;

    printf("Perimeter: %d\n",peri);
    printf("Area: %d",area);

    // Circle

    printf("\n\n\n\nEnter radius: ");
    scanf("%d",&r);

    int cir=2*3.14*r;
    int ar2=3.14*r*r;

    printf("Circumference: %d\n",cir);
    printf("Area: %d",ar2);

    return 0;
}
