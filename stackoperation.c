/*#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;


void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        stack[++top] = c;
    }
}


char pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int precedence(char op) {
    switch (op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        default: return 0;
    }
}


void infixToPostfix(char infix[], char postfix[]) {
    int i, k = 0;
    char symbol;

    for (i = 0; i < strlen(infix); i++) {
        symbol = infix[i];


        if (isalnum(symbol)) {
            postfix[k++] = symbol;
        }

        else if (symbol == '(') {
            push(symbol);
        }
        else if (symbol == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[k++] = pop();
            }
            pop();
        }

        else {
            while (top != -1 && precedence(stack[top]) >= precedence(symbol)) {
                postfix[k++] = pop();
            }
            push(symbol);
        }
    }


    while (top != -1) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter a valid parenthesized infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}*/

