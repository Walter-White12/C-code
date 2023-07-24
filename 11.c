//wap to enter two alphabet and count the alphabet between between them
#include <stdio.h>
int main()
{
   char a,b;
   int count=0;
   printf("Enter two alphabets:");
   scanf("%c %c",&a,&b);
   for(char i=a+1;i<b;i++)
   {
      count++;
   }
   printf("number of alphabets between %c and %c is %d",a,b,count);
   return 0;
}