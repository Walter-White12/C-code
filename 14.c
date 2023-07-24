//wap to convert a decimal number to binary numbers.
#include <stdio.h>

int main()
{
    int n,rmd,b=0,m=1;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    do
    {
        rmd=n%2;
        b+=rmd*m;
        n=n/2;
        m=m*10;
    }while(n>0);

    printf("Binary equivalent=%d",b);

}