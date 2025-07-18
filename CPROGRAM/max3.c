#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three no:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && b>c)
    {
        printf("a maximum no: %d",a);
    }
    else if(b>a && b>c)
    {
        printf("b maximum no:%d",b);
    }
    else
    {
        printf("c maximum no:%d",c);
    }
    return 0;
}