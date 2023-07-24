/*. WAP to create user defined function which reverses a given number as a formal 
parameter. The function should return both the reversed number and sum of 
digits.*/

#include <stdio.h>
void revi(int,int*,int*);
int main()
{
    int num,rev,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    revi(num,&rev,&sum);
    printf("%d is the reversed number\n",rev);
    printf("%d is the sum of a digit",sum);
}

void revi(int n,int*rev,int*sum)
{
     int rmd;
     *rev=0;
     *sum=0;
    while(n>0)
    {
        rmd=n%10;
        *rev=*rev*10+rmd;
        *sum+=rmd;
        n=n/10;
    }

}