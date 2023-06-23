#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char stack[MAX];
char infix[MAX];
char postfix[MAX];
int top = -1;

void push(char c)
{
    if(top == MAX-1)
    {
        printf("stack Overflow ");
        return ;
    }
    top++;
    stack[top]=c;
}
char pop()
{
    char c;
    if(top == -1)
    {
        printf("stack underflow");
        exit(1);
    }
    c=stack[top];
    top = top-1;
    return c;
}
int isEmpty()
{
    if(top == -1)
    return 1;
    else 
    return 0;
}
int space(char c)
{
    if (c == 1 || c == 0)
        return 1;
    else
        return 0;
}
void print()
{
    int i;
    printf("The equivalent postfix expression is : ");
    while(postfix[i])
    {
        printf("%c",postfix[i++]);
    }
    printf("\n");
}
int precedence(char symbol)
{
    switch (symbol)
    {
    case '^':
        return 3;
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}

void inTopost()
{
    int i, j = 0;
    char symbol, next;
    for (i = 0; i < strlen(infix); i++)
    {
        if (!space(symbol))
        {
            symbol = infix[i];
            switch (symbol)
            {
            case '(':
                push(symbol);
                break;

            case ')':
                while (next = pop() != '(')
                    postfix[j++] = next;
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while (!isEmpty() && precedence(stack[top] >= precedence(symbol)))
                    postfix[j++] = pop();
                push(symbol);
                break;
            default:
                postfix[j++] = symbol;
            }
        }
    }
    while (!isEmpty())
        postfix[j++] = pop();
    postfix[j] = '\0';
}

int main()
{
    printf("Enter the infix expression : ");
    gets(infix);
    inTopost();
    print();

    return 0;
}