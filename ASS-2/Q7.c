#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first no:");
    scanf("%d",&a);
    printf("Enter the second no:");
    scanf("%d",&b);
    printf("Enter the third no:");
    scanf("%d",&c);

    if(a>b && a<c || a<b && a>c)
    {
        printf("%d is between the %d and %d",a,b,c);
    }
    else if(b>a && b<c || b<a && b>c)
    {
        printf("%d is between the %d and %d",b,a,c);
    }
    else
    {
        printf("%d is between the %d and %d",c,a,b);
    }
    return 0;
}
