#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtFront(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
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
        newNode->prev = temp;
    }
}

void deleteNode(struct Node** head, struct Node* node) {
    if (*head == NULL || node == NULL) {
        return;
    }
    if (*head == node) {
        *head = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    free(node);
}

void insertAtPosition(struct Node** head, int data, int position) {
    if (*head == NULL || position <= 0) {
        printf("Invalid position\n");
        return;
    }
    
    struct Node* newNode = createNode(data);
    if (position == 1) {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    } else {
        struct Node* temp = *head;
        int count = 1;
        while (temp != NULL && count < position) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            printf("Invalid position\n");
            return;
        }
        newNode->prev = temp->prev;
        newNode->next = temp;
        temp->prev->next = newNode;
        temp->prev = newNode;
    }321
}

void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL || position <= 0) {
        printf("Invalid position\n");
        return;
    }
    
    struct Node* temp = *head;
    if (position == 1) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
    } else {
        int count = 1;
        while (temp != NULL && count < position) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            printf("Invalid position\n");
            return;
        }
        temp->prev->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        free(temp);
    }
}

void reverse(struct Node** head) {
    struct Node* current = *head;
    struct Node* temp = NULL;
    
    while (current != NULL) {
        
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        
        current = current->prev;
    }
    
    if (temp != NULL) {
        *head = temp->prev;
    }
}


void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    
    // Insert nodes at the front of the list
    insertAtFront(&head, 3);
    insertAtFront(&head, 2);
    insertAtFront(&head, 1);
    printList(head);
    // Insert nodes at the end of the list
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);
    printList(head);
    // Print the list
    printf("Doubly linked list: ");
    printList(head);
    
    // Delete a node from the list
    deleteNode(&head, head->next);

	insertAtPosition(&head,9,2);
	deleteAtPosition(&head,3);
    printList(head);
    // Print the updated list
    printf("Updated list after deletion: ");
    printList(head);

	reverse(&head);
	printList(head);
    
    return 0;
}
