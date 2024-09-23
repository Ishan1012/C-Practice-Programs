// Program to print armstrong number in range
#include<stdio.h>
#include<math.h>

// Driver code
int main(int argc, char const *argv[])
{
    // Local variable declaration
    int n1,n2,r,i,c=0,t1=0,a=0,s=0;

    // Taking input from the user
    printf("Enter upper and lower limit: ");
    scanf("%d %d",&n1,&n2);

    // Printing armstrong in range
    for(i=n1;i<=n2;i++)
    {
        // checking whether the number is armstrong or not
        c=0;
        t1=i;
        while(t1!=0)
        {
            t1=t1/10;
            c++;
        }

        a=i;
        s=0;
        while(a!=0)
        {
            r=a%10;
            s=s+pow(r,c);
            a=a/10;
        }

        if(i==s)
        printf("%d,",i);
    }
    return 0;
}
