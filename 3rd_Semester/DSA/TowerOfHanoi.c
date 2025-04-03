//wap to calculate the  number of steps required  to move disk in pegs. 
#include<stdio.h>
int TOH(int n,int A, int B,int C)//where n is number of disk and a,b,c is pegs.
{
    static n1=1;
    if (n>0)
    {
         TOH(n-1,B,A,C);
         printf("%d.move disk from %c to %c:\n",n1++,A,C);
         TOH(n-1,A,C,B);// Recursively calculate the number of steps
}
}
int main()
{
    char a='A';
    char b='B';
    char c='C';
    int n,result;
    printf("enter the value of n:");
    scanf("%d",&n);
    result=TOH(n,a,b,c);
    return 0;
}