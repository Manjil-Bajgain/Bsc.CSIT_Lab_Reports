#include<stdio.h>
#include<conio.h>
    int fibo(int a)
    {
        if (a==0)
        {
            return 0;
        }
        else if (a==1)
        {
            return 1;
        }
        else
        return fibo(a-1)+fibo(a-2);//recursive defination.
        
    }
    int main()
{
    int a,b,result;
    printf("Enter the number that you want to find the fibonacci series:");
    scanf("%d",&a);
    result=fibo(a);
    printf("the fibonacci series is:");
    for (int i = 0; i <= a; i++)
    {
        printf("%d,",fibo(i));
    }
    
    return 0;
}


