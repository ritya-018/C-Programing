#include<stdio.h>
int main()
{
    float r,h,sa,v;
    printf("enter the radius:");
    scanf("%f",&r);
    printf("enter the height:");
    scanf("%f",&h);
    sa=(2*3.14*r*r)+(2*3.14*r*h);
    printf("surface area:%f",sa);
    v=(2*3.14*r*r*h);
    printf("\nvaluome:%f",v);
    return 0;
}