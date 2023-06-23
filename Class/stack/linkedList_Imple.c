#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node *push(int data,struct node *top)
{
    struct node *newNode;
    newNode = malloc(sizeof(newNode));
    if(newNode == NULL)
    {
        printf("stack overflow");
        exit(1);
    }
    newNode->data = data;
    newNode->link = NULL;

    newNode->link = top;
    top = newNode;
    return top;
}


int isEmpty(struct node *top)
{
    if(top == NULL)
    return 1;
    else return 0;
}

struct node *pop(struct node * top)
{
    struct node*temp;
    if(isEmpty(top))
    {
        printf("stack is empty bhai ruk jaa !!!");
        exit(1);
    }
    temp = top;
    top = top->link; 
    return temp;
}

void print(struct node* top)
{
    struct node* temp;
    temp = top;
    printf("stack elements are : ");
    while(temp)
    {   
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

int main()
{
    struct node *top =NULL;
    struct node *top1 =NULL;
    top = push(1,top);
    top = push(2,top);
    top = push(3,top);

    struct node*temp;
    temp = pop(top);
    top1 = push(temp->data,top1);
    top = temp->link;
    temp = pop(top);
    top1 = push(temp->data,top1);
    top = temp->link;
    temp = pop(top);
    top1 = push(temp->data,top1);
    top = temp->link;
    print(top);
    print(top1);

    return 0;
}