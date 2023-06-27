//its a linear data structure in which insertion and deletion are allowed only at the end.
//we can impliment stack using array or linked list.
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
    if(top == -1){
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


int main()
{
    int choice,data;

    while(1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the element of stack\n");
        printf("5. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        
        switch(choice)
        {
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d",&data);
                push(data);
                break;
            
            case 2:
                data = pop();
                printf("Deleted element is %d\n",data);
                break;
            case 3:
                data = peek();
                printf("The top element of stack is :%d ",data);
                break;
            case 4:
                printf("Elements in the stack are : \n");
                print();
            case 5:
                exit(1);
            default:
                printf("Wrong choice");
        }
    }
    print();
    return 0;
}