#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    printf("%d%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n%d%d",a,b);
    return 0;
}