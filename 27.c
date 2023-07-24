//wap to count the number of characters in the line 

#include <stdio.h>
int main ()
{
    char str[30];
    int count=0;
    char *ptr;
    printf("Enter the line of a words:");
    scanf("%[^\n]",str);
    ptr=str;//giving inital value to ptr
    //it is done by the same way of array just we are upgrading the address and checking the value inside the address
    
    while(*ptr!='\0')
    {
        count++;
        ptr++;
    }
    printf("\nThe number of characters is %d",count);
}