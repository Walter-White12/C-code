//wap to print hailstone series
#include <stdio.h>
int main()
{
    int n,first,series=1;
    printf("Enter numbers:");
    scanf("%d%d",&n,&first);
    printf("%d ",first);
    for(int i=1;i<=n;i++)
    {
        if(first%2==0)
        {
            first=first/2  ;
            
        }
        else
        {
            first=(first*3)+1;
            
        }
       printf("%d ",first);
       

    }
    
}