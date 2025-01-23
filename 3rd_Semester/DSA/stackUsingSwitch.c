#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#define MAX 2 // array size

struct stack
{
    int arr[MAX];
    int top;
};

void push(struct stack *sp, int item)
{
    if (sp->top == MAX - 1)
    {
        printf("\n The stack is overflow...\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = item;
        printf("%d is push in stack\n", item);
    }
}

void pop(struct stack *sq)
{
    if (sq->top == -1)
    {
        printf("\n The stack is underflow...\n");
    }
    else
    {
        printf("%d is pop from stack\n", sq->arr[sq->top]);
        sq->top--;
    }
}
void display(struct stack *sq)
{
    if (sq->top == -1)
    {
        printf("Stack is empty...\n");
    }
    else
    {
        printf("The data of stack is:\n");
        // for(int i=sq->top;i>=0;i--)
        for (int i = 0; i <= sq->top; i++)
        {
            printf("%d,", sq->arr[i]);
        }
    }
}

int main()
{
    struct stack *sq;
    sq->top = -1;
    int c, choose, item;
    while (1)
    {
        printf("\n\n1.For push\n");
        printf("2. For pop\n");
        printf("3. For display\n");
        printf("4.For exit\n");
        printf("Choose number(1-4):- ");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            printf("Enter a number to push:-");
            scanf("%d", &item);
            push(sq, item);
            break;

        case 2:
            pop(sq);
            break;

        case 3:
            display(sq);
            break;

        case 4:
            printf("\n\nProgram END...\n");
            exit(0);
            break;

        default:
            printf("Wrong Entry!!!\n Please choose (1-4) only\n");
            break;
        }
    }
    return 0;
}