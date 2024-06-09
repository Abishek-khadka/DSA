// WAP to create structure Student having member like name,roll,address,gpa,regestration no. and input data of 48 students and sort all info. according to their name.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i, j, n;
struct Student
{
    char name[20];
    char address[20];
    int roll;
    long int regestration_no;
    float gpa;
} S[48], temp;
void getdata();
void sort();
void display();
int main()
{
    int choice;
    while (1)
    {
        printf("What do you want to do??\n");
        printf("1.Getdata\n2.Sort\n3.Display4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            getdata();
        case 2:
            sort();
        case 3:
            display();
        case 4:
            exit(0);
        default:
            printf("Wrong Choice\n");
        }
    }
    return 0;
}
void getdata()
{
    printf("Enter how many Student??\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Information of %dth Student\n", i + 1);
        printf("What's your name??\n");
        getchar();
        fgets(S[i].name, 20, stdin);
       // S[i].name[strcspn(S[i].name, "\n")] = 0; // Remove trailing newline
        printf("Enter your address\n");
        getchar();
        fgets(S[i].address, 20, stdin);
       // S[i].address[strcspn(S[i].name, "\n")] = 0; // Remove trailing newline
        printf("Enter your id and regestration_no\n");
        scanf("%d%ld", &S[i].roll, &S[i].regestration_no);
        printf("Enter your GPA\n");
        scanf("%f", &S[i].gpa);
    }
}
void sort()
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((strcmp(S[i].name,S[j].name)>0))
            {
                temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }
}
void display()
{
    printf("INFORMATION\n");
    for (int i = 0; i < n; i++)
    {
        printf("Information of %d th student\n",i+1);
        printf("Name=");
        puts(S[i].name);
        printf("Location=");
        puts(S[i].address);
        printf("Roll=%d\n", S[i].roll);
        printf("Regestration no.=%ld\n", S[i].regestration_no);
        printf("Obtained GPA=%f\n",S[i].gpa);
    }
}