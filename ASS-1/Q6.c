#include<stdio.h>
int main()
{
    float l,b,h,sa,v;
    printf("enter three dimensions:");
    scanf("%f%f%f",&l,&b,&h);
    sa=2*((l*b)+(l*h)+(b*h));
    printf("surface area:%.2f",sa);
    v=(l*b*h);
    printf("\nvolume is:%.2f",v);
    return 0;
}