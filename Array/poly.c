#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int coeff;
    int exp;
    struct Node *next;
};
struct Node *head1 = NULL;
struct Node *head2 = NULL;

struct Node *create(struct Node* head)
{
    printf("\n");
    head = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter value of coeff : ");
    scanf("%d",&head->coeff);
    printf("Enter power of x : ");
    scanf("%d",&head->exp);
    head->next = NULL;
    printf("Do you what to add for data : y/n");
    int x;
    scanf("%d",&x);
    int y=x;
    struct Node *p=head;
    while(y==1)
    {
        struct Node *t=(struct Node *)malloc(sizeof(struct Node));
        printf(" \nEnter coefficient ");
        scanf("%d",&t->coeff);
        printf("Enter power of x : ");
        scanf("%d",&t->exp);
        t->next=NULL;
        p->next=t;
        p=t;
        scanf("%d",&y);
    }
    printf("\n");
    return head;
}

void display(struct Node *p)
{
    while(p->next!=NULL)
    {
        printf("%d",p->coeff);
        printf("x^");
        printf("%d",p->exp);
        printf(" + ");
        p=p->next;
    }
    printf("%d",p->coeff);
    printf("x^");
    printf("%d",p->exp);
}

struct Node* add(struct Node *p,struct Node* y)
{
    
}

int main()
{ 
    head1=create(head1);
    display(head1);
    head2=create(head2);
    display(head2);
    return 0;
}