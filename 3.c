//wap to convert lowecase to uppercase
#include <stdio.h>
int main()
{
    char letter;
    int uc,lc;
    printf("Enter a character:");
    scanf("%c",&letter);
    if(letter>=65 && letter<=90)
    {
        lc=letter+32;
        printf("%c",lc);
    }
    else 
    {
        uc=letter-32;
        printf("%c",uc);
    }
return 0;
}