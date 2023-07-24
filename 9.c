//wap to find largest among three numbers using binary minus operator
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a-b>0 && a-c>0)
    {
        printf("%d is the greatest number.",a);
    }
    else if(b-c>0)
    {
        printf("%d is the greatest number",b);
    }
    else
    {
        printf("%d is the greatest number",c);
    }
}