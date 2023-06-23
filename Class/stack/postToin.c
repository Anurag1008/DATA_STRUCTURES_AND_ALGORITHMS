#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

char stack[MAX][MAX];
char postfix[MAX];
int top = -1;

void push(char *str) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    strcpy(stack[top], str);
}

char* pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

void postToin() {
    int i;
    char symbol;
    char op1[MAX], op2[MAX], temp[MAX];

    for (i = 0; postfix[i] != '\0'; i++) {
        symbol = postfix[i];

        if (!isOperator(symbol)) {
            temp[0] = symbol;
            temp[1] = '\0';
            push(temp);
        } else {
            strcpy(op2, pop());
            strcpy(op1, pop());
            sprintf(temp, "(%s%c%s)", op1, symbol, op2);
            push(temp);
        }
    }

    printf("The equivalent infix expression is: %s\n", stack[top]);
}

int main() {
    printf("Enter the postfix expression: ");
    gets(postfix);
    postToin();
    return 0;
}
