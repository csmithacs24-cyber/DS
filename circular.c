#include <stdio.h>
#define maxsize 5

int front = -1, rear = -1;
int cq[maxsize];

void insert(int item)
{
    if ((front == 0 && rear == maxsize - 1) || (front == rear + 1))
    {
        printf("Queue is full. Cannot insert further elements\n");
    }
    else if (front == -1)
    {
        front = rear = 0;
        cq[rear] = item;
    }
    else
    {
        rear = (rear + 1) % maxsize;
        cq[rear] = item;
    }
}

void delete()
{
    if (front == -1)
    {
        printf("Queue is empty. Cannot delete any elements\n");
    }
    else
    {
        printf("%d deleted\n", cq[front]);

        if (front == rear)
        {
            front = rear = -1;  // queue becomes empty
        }
        else
        {
            front = (front + 1) % maxsize;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i = front;
        printf("Queue elements: ");
        while (1)
        {
            printf("%d ", cq[i]);
            if (i == rear)
                break;
            i = (i + 1) % maxsize;
        }
        printf("\n");
    }
}

int main()
{
    while (1)
    {
        int operation;
        printf("Enter queue operation : 1.Insert  2.Delete  3.Display  4.Exit\n");
        scanf("%d", &operation);

        if (operation == 4)
            break;

        switch (operation)
        {
            case 1:
            {
                int item;
                printf("Enter element to insert: ");
                scanf("%d", &item);
                insert(item);
                break;
            }
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}

