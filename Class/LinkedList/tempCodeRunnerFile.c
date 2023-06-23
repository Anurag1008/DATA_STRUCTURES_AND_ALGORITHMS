#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtFront(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        *head = newNode;
    }
    printf("Inserted %d at the front of the linked list.\n", data);
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Inserted %d at the end of the linked list.\n", data);
}

void insertAtPosition(struct Node** head, int data, int position) {
    if (position <= 0) {
        printf("Invalid position. Insertion failed.\n");
        return;
    }
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        if (position == 1) {
            *head = newNode;
        } else {
            printf("Invalid position. Insertion failed.\n");
            return;
        }
    } else {
        if (position == 1) {
            newNode->next = *head;
            *head = newNode;
        } else {
            struct Node* temp = *head;
            int count = 1;
            while (count < position - 1) {
                temp = temp->next;
                if (temp == NULL) {
                    printf("Invalid position. Insertion failed.\n");
                    return;
                }
                count++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    printf("Inserted %d at position %d of the linked list.\n", data, position);
}

void deleteAtFront(struct Node** head) {
    if (*head == NULL) {
        printf("Linked list is empty. Unable to delete.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("Deleted the node at the front of the linked list.\n");
}

void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("Linked list is empty. Unable to delete.\n");
        return;
    }
    struct Node* prev = NULL;
    struct Node* current = *head;
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }
    if (prev == NULL) {
        *head = NULL;
    } else {
        prev->next = NULL;
    }
    free(current);
    printf("Deleted the node at the end of the linked list.\n");
}

void deleteAtPosition(struct Node** head, int position) {
    if (position <= 0) {
        printf("Invalid position. Deletion failed.\n");
        return;
    }
    if (*head == NULL) {
        printf("Linked list is empty. Unable to delete.\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;
    int count = 1;
    while (temp != NULL && count < position) {
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (temp == NULL) {
        printf("Invalid position. Deletion failed.\n");
        return;
    }
    if (prev == NULL) {
        *head = (*head)->next;
    } else {
        prev->next = temp->next;
    }
    free(temp);
    printf("Deleted the node at position %d of the linked list.\n", position);
}

void reverseLinkedList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    *head = prev;
}

struct Node* mergeLinkedLists(struct Node* head1, struct Node* head2) {
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    
    struct Node* mergedHead = NULL;
    
    if (head1->data <= head2->data) {
        mergedHead = head1;
        mergedHead->next = mergeLinkedLists(head1->next, head2);
    } else {
        mergedHead = head2;
        mergedHead->next = mergeLinkedLists(head1, head2->next);
    }
    
    return mergedHead;
}


void display(struct Node* head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }
    struct Node* temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    struct Node* head1 = NULL;

    insertAtFront(&head1,7);
    insertAtFront(&head1,8);
    insertAtFront(&head1,4);

    insertAtFront(&head, 3);
    insertAtFront(&head, 2);
    insertAtFront(&head, 1);
    display(head);

    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);
    display(head);

    insertAtPosition(&head,3,2);

    deleteAtFront(&head);
    display(head);

    deleteAtEnd(&head);
    display(head);

    deleteAtPosition(&head,4);
    display(head);

    display(head1);

    display(mergeLinkedLists(head1,head));

    return 0;
}
