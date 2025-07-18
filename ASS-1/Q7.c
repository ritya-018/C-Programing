#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    printf("\nbefore swap:%d%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swap:%d%d",a,b);
    printf("\nbefore swap:%d%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nafter swap:%d%d",a,b);
    return 0;
}