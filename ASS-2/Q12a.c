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
    (a>b && a>c)?printf("\nA no is maximum"):(b>a && b>c)?printf("\nB no is maximum"):printf("\nC no is maximum");  
    (a<b && a<c)?printf("\nA no is minimum"):(b<a && b<c)?printf("\nB no is minimum"):printf("\nC no is minimum");
    return 0;
}