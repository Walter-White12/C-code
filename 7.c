//wap to find the second largest number
#include <stdio.h>
int main()
{
   int a,b,c,second;
   printf("enter the three variables:");
   scanf("%d%d%d",&a,&b,&c);
   second=(a>b)?(a>c?c:a):(b>c?c:b);
   printf("%d",second);


}