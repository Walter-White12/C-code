//wap to display whether you are male or female given you sex "M" and "F"
#include <stdio.h>
int main()
{
    char sex;
    printf("Enter a character:");
    scanf("%c",&sex);
    if(sex=='M'|| sex=='m')
    {
        printf("Male");
    }
    else if(sex=='F' || sex=='f')
    {
        printf("Female");
    }
    else
    {
        printf("Provide a valid character");
    }
}