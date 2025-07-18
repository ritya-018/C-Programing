#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("enter the initial velocity:");
    scanf("%f",&u);
    printf("enter the acceleration:");
    scanf("%f",&a);
    printf("enter the time:");
    scanf("%f",&t);
    v=u+a*t;
    printf("final velocity:%f",v);
    s=u+a*(t*t);
    printf("\ndistance is:%f",s);
    return 0;
}