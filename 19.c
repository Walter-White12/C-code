//wap to reverse the program using recursion
#include <stdio.h>
int rev(int);
int main()
{
    int num,r;
    printf("Enter a number:");
    scanf("%d",&num);
    r=rev(num);
    printf("%d",r);
}

int rev (int n)
{
    //we use static storage type because once it is assigned it will not be reassigned unlike other storage type
    static int  r=0; 
    if(n==0)
    {
        return (r);
    }
    else
    {
        r= r*10+n%10;
       return  rev(n/10);
    }

}