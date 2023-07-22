/*
wap to declare a strucutre where student data is stored and each students has 5 subject marks, 
we need to calculate the tm marks of that subject and display the structure according to the tm 
in descending order
*/

#include <stdio.h>
struct student
{
    char name[30];
    int marks[20];
    int tm;
}s1[100],temp;

int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        printf("Enter the name of a student:");
        scanf("%s",s1[i].name);
        //it takes the marks of a 5 subject
        for(j=0;j<5;j++)
        {
            printf("Enter the marks of a %d subject:",j+1);
            scanf("%d",&s1[i].marks[j]);
            s1[i].tm+=s1[i].marks[j];
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s1[i].tm<s1[j].tm)
            {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("%s\t%d\n",s1[i].name,s1[i].tm);
    }

    return 0;


}