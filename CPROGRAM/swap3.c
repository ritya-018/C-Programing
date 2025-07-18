#include<stdio.h>
int main()
{
    int a,b;
    printf("enter to no:");
    scanf("%d%d",&a,&b);
    printf("%d%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nbefore swap:\n a=%d\n b=%d",a,b);
    return 0;
    
}