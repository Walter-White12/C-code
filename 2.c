//wap to test a entered number whether it is exactly divisible by 5 but not by 11
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if((num%5==0)&& (num%11!=0))
    {
        printf("%d is the required number",num);
    }
    else
    {
        printf("%d is not a required number",num);
    }
}