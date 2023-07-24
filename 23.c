//. WAP to create user defined function to check a number prime or not.

#include <stdio.h>
int prime(int);
int main ()
{
    int num,p;
    printf("Enter a number:");
    scanf("%d",&num);
    p=prime(num);
    if(p==1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }

    
}

int prime(int num)
{
    int flag=0;
    for(int i=2;i<(num)/2;i++)
    {
        if(num%i==0)
        {
            flag++;
        }
    }
    if (flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
} 
