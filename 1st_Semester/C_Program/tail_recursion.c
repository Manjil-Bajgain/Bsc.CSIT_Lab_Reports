#include <stdio.h>
#include<conio.h>
int factorial_tail(int n, int a)
{
    if (n == 0 || n == 1)
    {
        return a;
    }
    return factorial_tail(n - 1, n * a);
}
int factorial(int n)
{
    return factorial_tail(n, 1);
}
int main()
{  int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}