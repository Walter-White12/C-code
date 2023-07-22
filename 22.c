#include <stdio.h>

int main()
{
    int a,b;
    double c=123.55667788;
    char str[]="I enjoy programming";
    scanf("%3d%2d",&a,&b);
    printf("a=%5d\nb=%-7d",a,b);
    printf("\n%10.7s",str);
    printf("\n%0.3f",c);
    printf("\n%-2.6f",c);
}