//printing nth term of a fibbonaci series by recursion

#include <stdio.h>
int fib(int);
int main()
{
    int a,n;
    printf("Enter the range:");
    scanf("%d",&n);
    a=fib(n);
    printf("%d",a);
}

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}