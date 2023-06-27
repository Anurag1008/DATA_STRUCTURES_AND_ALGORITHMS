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

    deleted = queue[front];
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
    printf("\n");
    int itr = rear;
    for(int i=front;i<=rear;i++)
    printf("%d ",queue[i]);
    printf("\n");
}

int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    printf("\n");
    display();

    int value = dequeue();
    int value2 = dequeue();
    printf("%d",value);
    //size();
    display();
    return 0;
}