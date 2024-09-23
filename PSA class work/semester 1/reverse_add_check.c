#include<stdio.h>

int reverse(int n) // to find the revrese of given number
{
    int d,reverse=0;
    while(n!=0)
    {
        d=n%10;
        reverse=reverse*10+d;
        n=n/10;
    }
    
    return reverse;
} // returns reverse of a number

//driver code
int main(int argc, char const *argv[])
{
    int num,count=0,rev;
    printf("Enter the number: ");
    scanf("%d",&num);

    while(1) //infinite loop
    {
        rev=reverse(num); //get reverse
        if(rev==num)      //check if palindrome
        {
            printf("reverse=%d\ncount=%d",rev,count);
            break;
        }
        num=num+rev; //update the number for further iterations
        count++; //update the count
    }
    
    return 0;
}