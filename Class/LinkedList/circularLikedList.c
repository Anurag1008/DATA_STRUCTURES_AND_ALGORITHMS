#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* last = NULL;

void insertAtFront(int val)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(last==NULL)
    {
        temp->data = val;
        temp->next = temp;
        last = temp;
    }
    else{
        temp->data =val;
        temp->next = last->next;
        last->next = temp;
    }
}

void insertAtLast(int val)
{
    struct node*temp = (struct node*)malloc(sizeof(struct node));
    if(last == NULL)
    {
        temp->data = val;
        temp->next = temp;
        last = temp;
    }
    else{
        temp->data =val;
        temp->next = last->next;
        last->next=temp;
        last=temp;
    }
}
void viewList()
{
    // If list is empty
    if (last == NULL)
        printf("\nList is empty\n");
 
    // Else print the list
    else {
        struct node* temp;
        temp = last->next;
        do {
            printf("\nData = %d", temp->data);
            temp = temp->next;
        } while (temp != last->next);
    }
}

void insertInBet(int val,int pos)
{
    struct node* temp = last;
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    while(pos != 1)
    {
        temp = temp->next;
        pos--;
    }
    newNode->next = temp->next;  //remember this.
    temp->next = newNode;
}

void deleteAtFirst()
{
    struct node* temp = last;
    temp->next = temp->next->next;
}

void deleteAtLast()
{
    struct node* stop = last;
    struct node* temp = last->next;
    while(temp->next->next!=stop)
    {
        temp=temp->next;
    }
    temp->next->next = stop->next;
}

void deleteInBet(int pos)
{
    struct node* temp = last;
    while(pos!=1)
        temp=temp->next,pos--;
    
    temp->next = temp->next->next;
    
}

int main()
{
    insertAtFront(2);
    insertAtFront(3);
    insertAtFront(4);
    insertAtLast(8);
    insertAtLast(10);
    deleteInBet(3);
    viewList();
    return 0;
}