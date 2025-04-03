//infix to postfix.

#include <stdio.h>
#include<conio.h>
#include <ctype.h> // For isalnum

char stack[20];
int top = -1;

void push(char x) {
    stack[++top] = x;  // Increment top before assignment
}

char pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        // return '\0';
    } else {
        return stack[top--];  // Decrement top after returning value
    }
}

int priority(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    // return -1; // Invalid operator
}

int main() {
    char exp[20];
    char *e, x;

    printf("Enter the expression:\n");
    scanf("%s", exp);
    e = exp;

    while (*e != '\0') { // Null terminator
        if (isalnum(*e)) {
            printf("%c", *e);
        } else if (*e == '(') {
            push(*e);
        } else if (*e == ')') {
            while ((x = pop()) != '(') {
                printf("%c", x);
            }
        } else {
            while (top != -1 && priority(stack[top]) >= priority(*e)) {
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }

    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}
