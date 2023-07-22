/*
1
22
333
4444
55555*/

// #include <stdio.h>

// int main()
// {
//     int a=1;
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",a);
//         }
//         printf("\n");
//         a++;
//     }

// }

#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        for (k = 1; k <= 5-i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}