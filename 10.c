//wap to read a year and determine whether it is leap year or not
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("It is a leap year");
    }
    else if(year%100==0)
    {
        printf("It is not a leap year");

    }
    else if(year%4==0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }


}