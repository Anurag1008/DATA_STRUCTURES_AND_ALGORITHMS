#include<stdlib.h>
#include<stdio.h>
#define Max 5

int queue[Max];
int rear = -1;
int front =-1;

void enqueue()
{
    int data;
    if(rear == Max-1)
        printf("overFlow");

    if(front == -1)
    front = 0;

    rear ++ ;

    printf("Enter the element to be inserted : ");
    scanf("%d",&data);
    queue[rear]=data;
}

int dequeue()
{
    int deleted;

    if(rear == -1 || front == -1 || front > rear)
    printf("underFlow");

    deleted = queue[rear];
    rear -- ;
    front ++;

    return deleted;
}

int size()
{
    if(rear == -1)
    return 0;

    return rear;
}

int Front()
{
    return queue[front];
}

void display()
{
    int itr = rear;
    for(int i=0;i<=rear;i++)
    printf("%d ",queue[i]);
}

int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    int value = dequeue();
    printf("%d",value);
    //size();
    display();
    return 0;
}