#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    printf("before swap:\n a=%d\n b=%d",a,b);
    c=b;
    b=a;
    a=c;
    printf("\nafter swap:\n a=%d \n b=%d",a,b);
    return 0;
}