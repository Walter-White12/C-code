//wap to sort the array in the ascending order

#include <stdio.h>

int main()
{
    int num[20],temp;
    for(int i=0;i<10;i++)
    {
        printf("Enter the %d numbers:",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }

        }
    }

    printf("Numbers in the ascending order\n");
    for(int i=0;i<9;i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}