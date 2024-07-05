#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start;
void insert_begin()
{
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node *));
    printf("Enter data to be inserted\n");
    scanf("%d", &data);
    newnode->data = data;
    if (start == NULL)
    {
        newnode->next = NULL;
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
}
void insert_spec()
{
    int data, pos;
    printf("Enter data and position which and where to be inserted\n");
    scanf("%d%d", &data, &pos);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = data;
    if (start == NULL)
    {
        newnode->next = NULL;
        start = newnode;
    }
    else
    {
        struct node *temp = start;
        int count = 1;
        while (count < pos - 1)
        {
            temp = temp->next;
            count++;
            if (temp == NULL)
            {
                printf("NOde in the list less than the position\n");
                return;
            }
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void insert_end()
{
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node *));
    printf("Enter data to be inserted\n");
    scanf("%d", &data);
    newnode->data = data;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct node *temp = start;
        int count = 1;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void delete_begin()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("Link list in on underflow\n");
        return;
    }
    else
    {
        temp = start;
        printf("Deleted item=%d", temp->data);
        start = temp->next;
        free(temp);
    }
}
void delete_spec()
{
    if (start == NULL)
    {
        printf("Link list in on underflow\n");
        return;
    }
    int pos;
    printf("Enter position which to be deleted\n");
    scanf("%d", &pos);
    int count = 0;
    struct node *previous = start;
    struct node *current = start;
    while (count < pos - 1)
    {
        previous = current;
        current = current->next;
        count++;
    }
    previous->next = current->next;
    printf("Deleted item of node=%d\n", current->data);
    current->next = NULL;
    free(current);
}
void delete_end()
{
    struct node *temp, *temp1;
    if (start == NULL)
    {
        printf("Link list in on underflow\n");
        return;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp1 = temp;
            temp = temp->next;
        }
        printf("Deleted item of node=%d\n", temp->data);
        temp1->next = NULL;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("Link list in on underflow\n");
        return;
    }
    else
    {
        temp = start;
        printf("List item are:-\n");
        while (temp->next != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("%d\t", temp->data);
    }
    printf("\n");
}
int main()
{
    int choice;
    while (1)
    {

        printf("Enter your choice\n");
        printf("1.insert_begin  2.insert_specified  3.insert_end   4.delete_begin   5.delete_spec  6.delete_end  7.display  8.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_begin();
            break;
        case 2:
            insert_spec();
            break;
        case 3:
            insert_end();
            break;
        case 4:
            delete_begin();
            break;
        case 5:
            delete_spec();
            break;
        case 6:
            delete_end();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Cwrong choice\n");
            break;
        }
    }
    return 0;
}
