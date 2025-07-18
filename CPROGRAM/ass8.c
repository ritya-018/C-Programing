#include<stdio.h>
int main()
{
    int empid;
    float bsal,hra,da,tax,homesal;
    printf("enter the emp id");
    scanf("%d",&empid);
    printf("enter the basic sal:");
    scanf("%f",&bsal);

    
    hra= 0.10*bsal;
    da=0.30*bsal;
    tax=0.5*bsal;

    homesal=(bsal*(hra+da-tax));

    printf("\nemp id:%d",empid);
    printf("\nhome salary:%f",homesal);
    return 0;
}