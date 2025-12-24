/*#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};


void push(struct Node **top, int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d\n", data);
}
void pop(struct Node **top) {
    if (*top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    struct Node *temp = *top;
    printf("Popped %d\n", temp->data);
    *top = (*top)->next;
    free(temp);
}

void enqueue(struct Node **front, struct Node **rear, int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*rear == NULL) {
        *front = *rear = newNode;
    } else {
        (*rear)->next = newNode;
        *rear = newNode;
    }
    printf("Enqueued %d\n", data);
}

void dequeue(struct Node **front, struct Node **rear) {
    if (*front == NULL) {
        printf("Queue Underflow\n");
        return;
    }
    struct Node *temp = *front;
    printf("Dequeued %d\n", temp->data);
    *front = (*front)->next;

    if (*front == NULL) *rear = NULL;
    free(temp);
}

void display(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *stack = NULL;
    struct Node *front = NULL, *rear = NULL;
    int choice, data;

    while (1) {
        printf("\n--- Stack & Queue using Linked List ---\n");
        printf("1. Push (Stack)\n");
        printf("2. Pop (Stack)\n");
        printf("3. Display Stack\n");
        printf("4. Enqueue (Queue)\n");
        printf("5. Dequeue (Queue)\n");
        printf("6. Display Queue\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                push(&stack, data);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                printf("Enter data: ");
                scanf("%d", &data);
                enqueue(&front, &rear, data);
                break;
            case 5:
                dequeue(&front, &rear);
                break;
            case 6:
                display(front);
                break;
            case 7:
                exit(0);
        }
    }
    return 0;
}*/



