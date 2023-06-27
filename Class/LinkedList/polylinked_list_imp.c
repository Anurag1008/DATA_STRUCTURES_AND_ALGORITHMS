#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coef;
    int expo;
    struct node *next;
}
    *head1 = NULL,
    *head2 = NULL;
struct node *create(struct node *head)
{
    printf("\n");
    printf("Enter head's Coefficeient and exponent: ");
    printf("\n");
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter's head coefficient ");
    scanf("%d", &head->coef);
    printf("Enter's head exponent ");
    scanf("%d", &head->expo);
    head->next = NULL;
    int x;
    printf("DO you want to add more data : y/n");
    scanf("%d", &x);
    struct node *p = head;
    int y = x;
    while (y == 1)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        printf("Enter's node coefficient ");
        scanf("%d", &t->coef);
        printf("Enter's node exponent ");
        scanf("%d", &t->expo);
        t->next = NULL;
        p->next = t;
        p = t;
        scanf("%d", &y);
    }
    return head;
}
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d", p->coef);
        printf("x^");
        printf("%d", p->expo);
        printf("+");
        p = p->next;
    }
}
struct node *add(struct node *head1, struct node *head2)
{
    struct node *temp;
    struct node *head3 = NULL;
    while (head1 && head2)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        if (head2->expo > head1->expo)
        {
            t->coef = head2->coef;
            t->expo = head2->expo;
            t->next = NULL;
            head2 = head2->next;
        }
        else if (head2->expo < head1->expo)
        {
            t->coef = head1->coef;
            t->expo = head1->expo;
            t->next = NULL;
            head1 = head1->next;
        }
        else
        {
            t->coef = head1->coef + head2->coef;
            t->expo = head1->expo;
            t->next = NULL;
            head1 = head1->next;
            head2 = head2->next;
        }
        if (head3 == NULL)
        {
            head3 = t;
            temp = t;
        }
        else
        {
            temp->next = t;
            temp = t;
        }
    }
    while (head1 != NULL)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        t->coef = head1->coef;
        t->expo = head1->expo;
        t->next = NULL;
        temp->next = t;
        temp = t;
        head1 = head1->next;
    }
    while (head1 != NULL)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        t->coef = head2->coef;
        t->expo = head2->expo;
        t->next = NULL;
        temp->next = t;
        temp = t;
        head2 = head2->next;
    }
    return head3;
}
struct node *subtract(struct node *head1, struct node *head2)
{
    struct node *temp;
    struct node *head3 = NULL;
    while (head1 && head2)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        if (head2->expo > head1->expo)
        {
            t->coef = -head2->coef;
            t->expo = head2->expo;
            t->next = NULL;
            head2 = head2->next;
        }
        else if (head2->expo < head1->expo)
        {
            t->coef = head1->coef;
            t->expo = head1->expo;
            t->next = NULL;
            head1 = head1->next;
        }
        else
        {
            t->coef = head1->coef - head2->coef;
            t->expo = head1->expo;
            t->next = NULL;
            head1 = head1->next;
            head2 = head2->next;
        }
        if (head3 == NULL)
        {
            head3 = t;
            temp = t;
        }
        else
        {
            temp->next = t;
            temp = t;
        }
    }
    while (head1 != NULL)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        t->coef = head1->coef;
        t->expo = head1->expo;
        t->next = NULL;
        temp->next = t;
        temp = t;
        head1 = head1->next;
    }
    while (head1 != NULL)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        t->coef = head2->coef;
        t->expo = head2->expo;
        t->next = NULL;
        temp->next = t;
        temp = t;
        head2 = head2->next;
    }
    return head3;
}
int main()
{
    head1 = create(head1);
    display(head1);
    printf("\n Enter second polynomial \n");
    printf("\n");
    head2 = create(head2);
    display(head2);
    printf("\n \n  \n");
    printf("Addition: \n");
    struct node *head3;
    head3 = add(head1, head2);
    display(head3);
    printf("\n \n  \n");
    printf("Subraction: \n");
    struct node *head4;
    head4 = subtract(head1, head2);
    display(head4);
}