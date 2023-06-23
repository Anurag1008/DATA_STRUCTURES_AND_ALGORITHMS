
#include<stdio.h>
#include<stdlib.h>
#define MAX 6 // preprocessor directive

int stack_arr[MAX]; //global declaration of stack

int top = -1;

void push(int data)
{
    if(top == MAX - 1)
    {
        printf("stack overflow");
        return;
    }
    top++;
    stack_arr[top] = data;
}

int pop()
{
    if(top == -1)
    {
        printf("stack is underflow");
        exit(1);  // exit(1) means abnormal terminatin of program. because i don't what to return any value.
    }

    int val = stack_arr[top];
    top = top - 1;

    return val;
}

void print()
{
    int i;
    while(top == -1)
    {
        printf("stack underflow\n");
        return;
    }
    for(i=top;i>=0;i--)
    printf("%d ",stack_arr[i]);

    printf("\n");
}

int isempty()
{
    if(top == -1)
    return 1;
    else 
    return 0;
}

int peek()
{
    if(isempty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    int value = stack_arr[top];
    top = top-1;
    return value;
}

void deciToBinary(int data)
{
    while(data != 0)
    {
        push(data%2);
        data = data/2;
    }
    while(top != -1)
    printf("%d ",pop());
}

int main()
{
    deciToBinary(156);
    return 0;
}