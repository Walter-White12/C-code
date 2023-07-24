//wap to find the 2nd largest number between three variables
#include <stdio.h>
int main()
{
    int a,b,c,greater;
    printf("Enter a number:");
    scanf("%d%d%d",&a,&b,&c);
    greater=(a>b)?(a>c?c:a):(b>c?c:b);
    printf("%d is the greatest number",greater);
    return 0;
}   