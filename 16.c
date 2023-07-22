// #include <stdio.h>

// int main()
// {
//     int n1,n2,flag;
//     printf("Enter the range:");
//     scanf("%d%d",&n1,&n2);
//     for(int i=n1+1;i<n2;i++)//loop goes up to n2
//     {
//         flag=0;
//         for(int j=2;j<=i/2;j++)// checks the prime numbers
//         {
//             if(i%j==0)
//             {
//                 flag++;
//             }
//         }
//         if(flag==0)
//         {
//             printf("%d ",i);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int sum=0,n;
    n=6;

   for(int i=1;i<=n/2;i++)
   {
    if(n%i==0)
    {
        sum+=i;
    }
   }
    if(sum==n)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
}