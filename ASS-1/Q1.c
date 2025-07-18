#include<stdio.h>
int main()
{
    float r,a,c;
    printf("enter the radius:");
    scanf("%f",&r);
    a=3.14*(r*r);
    printf("area of circle %f",a);
    c=2*(3.14*r);
    printf("\narea of cirucmfernce%f",c);
    return 0;
}