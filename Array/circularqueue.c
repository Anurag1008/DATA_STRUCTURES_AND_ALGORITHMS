#include<stdio.h>
int size = 5;
int front = -1;
int rear = -1;

void insert(int q[],int data){
    if((front == 0 && rear > size-1) || front > rear){
        printf("stack is overflow");
    }
    else if(front == -1|| rear == -1){
        rear++;
        front++;
    }
    else if(rear == size-1 && front>0){
       rear = 0;
    }
    else rear++;

    q[rear] = data;
}

void deleted(int q[]){
    if(front == -1 && rear == -1) printf("queue is empty");
    else if(front == rear){
        printf("%d deleted ",q[rear]);
        rear=-1;
        front = -1;
    }
    else{
        printf("%d deleted",q[front]);
        front++;
    }
}

void display(int queue[]){

}



int main(){
    int queue[size];
    push(queue,2);

}