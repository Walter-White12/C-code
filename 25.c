//. WAP to display the Fib series up to nth term by using recursive function.
#include <stdio.h>
int fib(int, int, int);
int main()
{
    int n;
    printf("Enter the range:");
    scanf("%d", &n);
    fib(0, 1, n);
    return  0;
}

int fib(int a, int b, int n)
{

   if(n==0)
   {
    return 0;
   }
   else if (n==1)
   return 1;
   else
   {
    return fib(b,a+b,n-1);
   }
}