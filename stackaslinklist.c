#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;
void enqueue();
void dequeue();
void display();
int main()
{
    int choice;
    while (1)
    {
        printf("\nEnter the choice");
        printf("\n1.Push 2.Pop 3.Display 4.Exit\n");
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
    struct stack *newnode;
    newnode = (struct stack *)malloc(sizeof(struct stack *));
    printf("Enter data you want to insert\n");
    scanf("%d", &data);
    newnode->data = data;
    if (top == NULL)
    {
        newnode->next = NULL;
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}
void dequeue()
{
    struct stack *temp;
    if (top == NULL)
    {
        printf("There is no element in list\n");
        return;
    }
    else
    {
        temp = top;
        top = top->next;
        printf("The deleted element is %d", *temp);
        free(temp);
    }
}
void display()
{

    struct stack *temp;
    if (top == NULL)
    {
        printf("\nStack is empty");
        return;
    }
    else
    {

        temp = top;
        printf("\n elements are\n");
        while (temp->next != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}