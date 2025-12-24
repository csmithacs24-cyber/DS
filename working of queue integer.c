#include <stdio.h>
#define MAX 5   // Maximum size of queue

int queue[MAX];
int front = -1, rear = -1;

// Function to insert an element into the queue
void insert(int value) {
    if ((rear + 1) % MAX == front) {
        printf("Queue Overflow! Cannot insert %d\n", value);
    } else {
        if (front == -1) { // First element
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("%d inserted into queue\n", value);
    }
}

// Function to delete an element from the queue
void delete() {
    if (front == -1) {
        printf("Queue Underflow! Cannot delete\n");
    } else {
        printf("%d deleted from queue\n", queue[front]);
        if (front == rear) {
            // Queue becomes empty
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

// Function to display the queue
void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
