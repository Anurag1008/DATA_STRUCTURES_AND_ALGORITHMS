#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int first = -1;
int stack_arr[MAX];

void push(int data)
{
    int i;
    first++;
    for(i=first;i>0;i--)
        stack_arr[i] = stack_arr[i-1];
    stack_arr[0] = data;
}

int pop()
{
    int i;
    int value;
    value = stack_arr[0];
    for(i=0;i<first;i++)
        stack_arr[i] = stack_arr[i+1];
    first -= 1;
    return value;
}

int isEmpty()
{
    if(first==-1)
        return 1;
    else
        return 0;
}

int peek()
{
    if(isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    return stack_arr[0];
}
void print()
{
    int i;
    if(first==-1)
    {
        printf("stack underflow\n");
        exit(1);
    }
    for(i=0;i<=first;i++)
        printf("%d ",stack_arr[i]);
    printf("\n");
}

//prime factorization program
void prime_fact(int num)
{
    int i = 2;
    while(num!=1)
    {
        while(num % i == 0)
        {
            push(i);
            num = num/i;
        }
        i++;
    }
    //in accending order
    while( first != 0)
    {
        printf("%d ",pop());
    }
}


int main()
{
    int number;
    scanf("%d",&number);
    prime_fact(number);
    print();
    return 0;
}