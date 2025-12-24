/*#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};


struct Node* createNode(int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->prev = newnode->next = NULL;
    return newnode;
}

void createList(struct Node **head, int data) {
    struct Node *newnode = createNode(data);

    if (*head == NULL) {
        *head = newnode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    newnode->prev = temp;
}

void insertLeft(struct Node **head, int value, int newdata) {
    struct Node *temp = *head;

    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL) {
        printf("Value %d not found!\n", value);
        return;
    }

    struct Node *newnode = createNode(newdata);

    newnode->next = temp;
    newnode->prev = temp->prev;

    if (temp->prev != NULL)
        temp->prev->next = newnode;
    else
        *head = newnode;

    temp->prev = newnode;
}

void deleteValue(struct Node **head, int value) {
    struct Node *temp = *head;

    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL) {
        printf("Value %d not found!\n", value);
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        *head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    printf("Node %d deleted.\n", value);
}

void display(struct Node *head) {
    struct Node *temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    int choice, value, newdata;

    while (1) {
        printf("\n1. Create List");
        printf("\n2. Insert Left of Node");
        printf("\n3. Delete Node by Value");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                createList(&head, value);
                break;

            case 2:
                printf("Insert new data: ");
                scanf("%d", &newdata);
                printf("Insert to the left of value: ");
                scanf("%d", &value);
                insertLeft(&head, value, newdata);
                break;

            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteValue(&head, value);
                break;

            case 4:
                display(head);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}*/


