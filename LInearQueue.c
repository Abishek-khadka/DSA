#include<stdio.h>
#include<stdlib.h>
#define size 10
int front = -1, rear = -1;
int queue[size];
void enqueue();
void dequeue();
void display();
void total_element();
int main()
{
    int choice;
    while(1)
    {

   printf("\n");
    printf("what do want to do??\n");
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Total Element\n5.Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    case 4:
        total_element();
        break;
    case 5:
        exit(0);
    default:
        printf("Wrong choice\n");
        break;
    }
    }
    return 0;
}
void enqueue()
{
    int data;
    printf("Enter item to enqueue\n");
    scanf("%d", &data);
    if (rear == size - 1)
    {
        printf("Queue is already full\n");
        return;
    }
    else if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear]=data;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        int item = queue[front];
        front++;
        printf("Deleted item=%d", item);
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("Your queue is as:\n");
        for (int i =front;i<=rear;i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}
void total_element()
{
    int total=rear+1-front;
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("total no.of queue items are:- %d",total);
    }
}