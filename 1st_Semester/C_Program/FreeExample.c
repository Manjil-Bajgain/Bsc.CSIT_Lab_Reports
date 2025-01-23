#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("enter the number:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("value before initialization is :\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    printf("after initialization :\n");
    printf("enter the number:\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", (ptr + i));
        sum = sum + *(ptr + i);
    }
    printf("the total sum is: %d", sum);
    free(ptr);
    return 0;
}