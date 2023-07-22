//wap to print the fibbonaci series using recursion function
#include <stdio.h>
void fibo(int,int,int);
int main()
{
    int n,a,b;
    a=0;
    b=1;
    printf("Enter the n number:");
    scanf("%d",&n);
    fibo(a,b,n);
    return 0;
}

void fibo(int a ,int b, int n)
{
    if(n>0)
    {
        printf("%d ",a);
        fibo(b,a+b,n-1);
    }
}