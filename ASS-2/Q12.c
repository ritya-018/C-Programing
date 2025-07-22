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

    if(a>b && a>c )
    printf("A no is maximum");
    if(b>a && b>c)
    printf(" B no is maximum");
    else
    printf(" C no is maaximum");

    if(a<b && a<c )
    printf("A no is minimum");
    if(b<a && b<c)
    printf(" B no is minimum");
    else
    printf(" C no is minimum");
    return 0;
}