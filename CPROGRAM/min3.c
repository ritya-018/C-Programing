#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 no:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && a<c)
    {
        printf("a is min:%d",a);
    }
    else if(b<a && b<c)
    {
        printf("b is min:%d",b);
    }
    else
    {
        printf("c is min:%d",c);
    }
    return 0;
}