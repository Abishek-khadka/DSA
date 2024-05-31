#include<stdio.h>
#include<stdlib.h>
#define size 6
int stack[size];
int top=-1;
void push();
void pop();
void display();
void displaytop();
int main()
{
    int choice;
    while(1)
    {
        printf("\n Enter your choice\n");
        printf("1.Push\n2.Pop\n3.display\n4.display the top value\n5.exit\n");

        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            displaytop();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Wrong choice\n");
        }


    }
    return 0;

}
void push()
{
    int a;
    printf("Enter a integer to be  pushed\n");
    scanf("%d",&a);
    if(top==size-1)
    {
        printf("Stack is on overflow\n");
    }
    else
    {
        top++;
        stack[top]=a;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Stack is on underflow\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("deleted item=%d",item);

    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("there is no data to display\n");

    }
    else
    {
        printf("Stack data are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
}
void displaytop()
{
    if(top==-1)
    {
        printf("there is no data to display\n");
    }
    else
    {
        printf("top data item = %d present at %d th place",stack[top],top);
    }
}