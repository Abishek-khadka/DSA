#include <stdio.h>
int fibo(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter first and second number of your series\n");
    scanf("%d%d", &a, &b);
    printf("How many terms you need\n");
    int n;
    scanf("%d", &n);
    int i;
    printf("Your series is:=\n");
    for (i = 0; i < n; i++)
    {
        printf("%d,", fibo(a, b, i));
    }
    return 0;
}
int fibo(int a, int b, int c)
{
    if (c == 0)
        return a;
    else if (c == 1)
        return b;
    else
        return (fibo(a, b, c - 1) + fibo(a, b, c - 2));
}
