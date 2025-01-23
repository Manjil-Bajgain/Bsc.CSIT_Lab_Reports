#include<stdio.h>
#include<conio.h>
    int gcd(int a,int b)
    {
        if (b==0)
        {
            return a;
        }
        else
        return gcd(b,a%b);//recursive defination.
        
    }
    int main()
{
    int a,b,result;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    result=gcd(a,b);
    printf("the gcd of the given number (%d,%d) is: %d",a,b,result);
}


