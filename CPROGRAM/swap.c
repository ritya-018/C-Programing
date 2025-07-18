#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    printf("before swaping\n a=%d \n b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nafter swpping is:\n a=%d \n b=%d;",a,b);
    return 0;
}