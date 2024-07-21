#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int data;
    struct Queue *next;
};

struct Queue *front = NULL;
struct Queue *rear = NULL;

void enqueue(int item)
{
    struct Queue *newnode = (struct Queue *)malloc(sizeof(struct Queue));
    newnode->data = item;
    newnode->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    if (front == NULL && rear == NULL)
    {
        printf("There is no item to delete\n");
        return;
    }

    struct Queue *temp = front;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    printf("deleted item = %d\n", temp->data);
    free(temp);
}

void display()
{
    if (front == NULL && rear == NULL)
    {
        printf("No items\n");
        return;
    }

    struct Queue *temp = front;
    while (temp->next != NULL)
    {
        printf("%d,", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nEnter the choice\n");
        printf("\n 1.enqueue 2.dequeue 3.Display 4.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter item to enqueue: ");
            int item;
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice\n");
        }
    }

    return 0;
}
