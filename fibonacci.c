//WAP to calculate fibonacci series without using recursion
#include<stdio.h>
int main()
{
    int i,a,b,c,n;
    printf("enter first and second digit of your series\n");
    scanf("%d%d",&a,&b);
    printf("how many items do you want in your series\n");
    scanf("%d",&n);
    printf("your series is :- %d,%d,",a,b);
    for(i=0;i<=n-2;i++)
    {
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
    return 0;


}