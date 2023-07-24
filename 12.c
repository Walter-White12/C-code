//wap to convert the character from uppercase to lowercase
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("%c",ch+32);
    }
    else
    {
        printf("%c",ch-32);
    }
}