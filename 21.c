/* Create a structure Date containing three members: int dd, int mm and int yy. Create another 
structure Person containing four members: name, address, telephone and date of birth. For 
member date of birth, create an object of structure Date within Person. Using these structures, 
write a program to input the record. Then, display the contents in tabular form.*/

#include <stdio.h>

struct Date
{
    int dd;
    int mm;
    int yy;
};


struct Person
{
    char name[10];
    char address[10];
    int telephone;
    struct Date dob;
}emp[2];

int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter the name:");
        scanf("%s",emp[i].name);
        printf("Enter the address of this person");
        scanf("%s",emp[i].address);
        printf("Enter the telephone number:");
        scanf("%d",&emp[i].telephone);
       printf("Enter the day of a birth:");
       scanf("%d",&emp[i].dob.dd);
       printf("Enter the month of a birth:");
       scanf("%d",&emp[i].dob.mm);
       printf("Enter the year of a birth:");
       scanf("%d",&emp[i].dob.yy);
    }

    for(i=0;i<2;i++)
    {
        printf("Name:%s\tAdress:%s\tTelphon:%d\t\n",emp[i].name,emp[i].address,emp[i].telephone);
        printf("Day:%d\tMonth:%d\tYear:%d\n",emp[i].dob.dd,emp[i].dob.mm,emp[i].dob.yy);
    }
}