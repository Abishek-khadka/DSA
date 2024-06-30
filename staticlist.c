#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>
#define size 10
int p=-1;
int i;
int list[size];
// void insert_first();
void insert_end();
void insert_spec();
void delete_end();
void delete_spec();
// void delete_firs();
void display();
int  main()
{
    int choice;
    while(1)
    {
        printf("enter choice\n");
        printf(" 2.insert_end  3.insert_spec   5.delete_end  6.delete_spec  7.display  8.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            // case 1:
            // // insert_first();
            break;
            case 2:
            insert_end();
            break;
            case 3:
            insert_spec();
            break;
            // case 4:
            // delete_first();
            break;
            case 5:
            delete_end();
            break;
            case 6:
            delete_spec();
            break;
            case 7:
            display();
            break;
            case 8:exit(0);
            default:
            printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}
void insert_end()
{
    int data;
    printf("enter item to be inserted\n");
    scanf("%d",&data);
    if(p==size-1)
    {
        printf("List full\n");
        return;
    }
    else
    {
        p++;
        list[p]=data;
    }
}
void insert_spec()
{
    int data,pos;
    printf("enter item to be inserted and its position\n");
    scanf("%d%d",&data,&pos);
    if((pos>p+1)&&(pos<0))
    {
        printf("Invalid Position\n");
        return;
    }
    else
    {
    for(i=p;i>=pos-1;i--)
    {
        list[i+1]=list[i];
    }
    list[pos-1]=data;
    p++;
    }
}
void delete_end()
{
    int item;
    if(p==-1)
    {
        printf("EMPTY\n");
        return;
    }
    else{
        item=list[p];
        p--;
        printf("Deleted item=%d\n",item);
    }
}
void delete_spec()
{
    int item,pos;
    printf("Enter position\n");
    scanf("%d",&pos);
    if((pos>p)&&(pos<0))
    {
        printf("Invalid Position\n");
        return;
    }
    else{
        item=list[pos-1];
        for(i=pos-1;i<=p;i++)
        {
         list[i]=list[i+1];
        }
        p--;
    }
}
void display()
{

    if(p==-1)
    {
        printf("empty\n");
        return;
    }
    else{
        printf("list element are\n");
        for(i=0;i<=p;i++)
        {
            printf("%d\t",list[i]);
        }
         printf("\n");
    }

}