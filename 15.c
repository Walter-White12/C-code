// #include <stdio.h>

// int main()
// {
//     int num[20];
//     int count[20] = {0}; // Initialize count array with zeros

//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the %dth number: ", i + 1);
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (num[i] == num[j])
//             {
//                 count[i]++;
//             }
//         }
//     }

//     printf("Number\tFrequency\n");
//     for (int i = 0; i < 10; i++)
//     {
//         if (count[i] > 0)
//         {
//             printf("%d\t%d\n", num[i], count[i] + 1);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int num[20];
    int count[20] = {0}; // Initialize count array with zeros

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %dth number: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(int i=0;i<10;i++)
    {
        for (int j=i+1;j<10;j++)
        {
            if (num[i]==num[j])
            {
                count[i]++;
            }
        }
    }

    printf("The repeated numbers in ascending order is\n");
    for(int i=0;i<10;i++)
    {
        if(count[i]>0)
        printf("%d is repeated %d times\n",num[i],count[i]+1);
    }

    
    

}