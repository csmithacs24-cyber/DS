#include <stdio.h>
#include <ctype.h>   // for isalnum()
#include <string.h>  // for strlen()

#define MAX 100

char stack[MAX];
int top = -1;

// Push function
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        stack[++top] = c;
    }
}

// Pop function
char pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        return stack[top--];
    }
}

// Function to return precedence of operators
int precedence(char op) {
    switch (op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        default: return 0;
    }
}

// Function to convert infix to postfix
void infixToPostfix(char infix[], char postfix[]) {
    int i, k = 0;
    char symbol;

    for (i = 0; i < strlen(infix); i++) {
        symbol = infix[i];

        // If operand, add to postfix
        if (isalnum(symbol)) {
            postfix[k++] = symbol;
        }
        // If '(', push to stack
        else if (symbol == '(') {
            push(symbol);
        }
        // If ')', pop until '('
        else if (symbol == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[k++] = pop();
            }
            pop(); // remove '('
        }
        // If operator
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(symbol)) {
                postfix[k++] = pop();
            }
            push(symbol);
        }
    }

    // Pop remaining operators
    while (top != -1) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0'; // Null terminate string
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter a valid parenthesized infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
