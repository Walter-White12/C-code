//wap to sort the array using pointer

#include <stdio.h>

int main()
{
    int num[10],temp,*arr;
    for(int i=0;i<5;i++)
    {
        printf("Enter the %d number:",i+1);
        scanf("%d",&num[i]);
    }
    arr=num;//assigning inital value

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(*(arr+i)<*(arr+j))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    printf("Sorted number are :\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*(arr+i));
    }
}