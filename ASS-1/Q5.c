#include<stdio.h>
int main()
{
    float a,b,am,ah;
    printf("enter two no:");
    scanf("%f%f",&a,&b);
    am=(a+b)/2;
    printf("arthmatic :%f",a);
    ah=a*b/(a+b);
    printf("\nharmonic is:%f",b);
    return 0;
}