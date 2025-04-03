#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,*ptr,sum=0,n1;
    printf("enter the number:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("value before initialization is :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    printf("after initialization :\n");
    printf("enter the number:\n");
    for ( i = 1; i <= n; i++)
    {
        scanf("%d",(ptr+i));
        sum=sum+*(ptr+i);
    }
    printf("the total sum is: %d\n",sum);
    
printf("enter the size of number that you want to add on previous sum:\n");
scanf("%d",&n1);
    ptr=(int*)realloc(ptr,n*sizeof(int));  //reallocating
    printf("value before initialization is :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    printf("after initialization :\n");
    printf("enter the number:\n");
    for ( i = 1; i <= n; i++)
    {
        scanf("%d",(ptr+i));
        sum=sum+*(ptr+i);
    }
    printf("the total sum is: %d",sum);
    return 0;
}