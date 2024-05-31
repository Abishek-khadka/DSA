//WAP to calculate fibonacci series using recursion
#include<stdio.h>
int fibbo(int n);
int main()
{
    int i,n;
    //printf("enter first and second digit of your series\n");
    //scanf("%d%d",&a,&b);
    printf("how many items do you want in your series\n");
    scanf("%d",&n);
    //printf("your series is :- %d,%d,",a,b);
    for(i=0;i<n;i++)
    {
       printf("%d,",fibbo(i));

    }
    return 0;


}
int fibbo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
         return 1;
    else
        return fibbo(n-1)+fibbo(n-2);
}