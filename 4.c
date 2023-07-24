//wap to check the number is odd or even using bitwise operator
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if((num&1)==1)
    {
        printf("It is odd number");
    }
    else
    {
        printf("It is even number");
    }
}