#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 10

int n; // Global variable for number of employees
struct Employee
{
    char name[20];
    char address[20];
    int id;
    int position;
    float salary;
} E[size]; // Global array to store employee data;
void getdata();
void sort();
void display();
int main()
{
    int choice;
    while (1)
    {
        printf("Enter your choice\n");
        printf("1. Get Data\n2. Sort\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            getdata();
            break;
        case 2:
            sort();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong Choice\n");
            break;
        }
    }

    return 0;
}

void getdata()
{

    printf("Enter how many employee??\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Information of %dth Employee\n", i + 1);
        printf("What's your name??\n");
        getchar();
        fgets(E[i].name, 20, stdin);
        E[i].name[strcspn(E[i].name, "\n")] = 0; // Remove trailing newline
        printf("Enter your address\n");
        getchar();
        fgets(E[i].address, 20, stdin);
        E[i].address[strcspn(E[i].name, "\n")] = 0; // Remove trailing newline
        printf("Enter your id and position\n");
        scanf("%d%d", &E[i].id, &E[i].position);
        printf("Enter your Salary\n");
        scanf("%f", &E[i].salary);
    }
}

void sort()
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (E[i].salary < E[j].salary)
            {
                struct Employee temp = E[i];
                E[i] = E[j];
                E[j] = temp;
            }
        }
    }
}

void display()
{
    printf("INFORMATION\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name=");
        puts(E[i].name);
        //printf("\n");
        printf("Location=");
        puts(E[i].address);
        //printf("\n");
        printf("ID=%d\nPosition=%d\n", E[i].id, E[i].position);
        printf("Salary=%f\n", E[i].salary);
    }
}
