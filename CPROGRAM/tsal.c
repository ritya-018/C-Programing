#include<stdio.h>
int main()
{
    float bs,da,hra,tax,totals;
    printf("enter basic sal:");
    scanf("%f",&bs);
    printf("enter da(%%):");
    scanf("%f",&da);
    printf("enter hra(%%)");
    scanf("%f",&hra);
    printf("enter tax(%%):");
    scanf("%f",&tax);
    totals=bs+((bs*(da+hra-tax))/100);
    printf("enter total salary %f",totals);
    return 0;
}