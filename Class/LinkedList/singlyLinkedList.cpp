#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void insertAtBegin(struct Node** head, int val)
{
    struct Node* newNode = createNode(val);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int val)
{
    struct Node* newNode = createNode(val);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteFromEnd(struct Node** head)
{
    if (*head == NULL)
    {
        printf("List is empty. Cannot delete from end.\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL;
        free(temp);
    }
    else
    {
        free(temp);
        *head = NULL;
    }
}

void deleteFromBegin(struct Node** head)
{
    if (*head == NULL)
    {
        printf("List is empty. Cannot delete from beginning.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node* head = NULL;
    insertAtBegin(&head, 4);
    insertAtBegin(&head, 3);
    insertAtBegin(&head, 2);
    insertAtBegin(&head, 1);
    insertAtEnd(&head, 5);
    printList(head);

    deleteFromEnd(&head);
    printList(head);

    deleteFromBegin(&head);
    printList(head);

    return 0;
}
