#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    printf("before swap:\na=%d\nb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a=%d\nb=%d",a,b);
    return 0;
}