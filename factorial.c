//WAP to calculate factorial without using recursion
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact = fact*i;
    }
    printf("factorial=%d\n",fact);
    return 0;
}