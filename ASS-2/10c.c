#include<stdio.h>
int main()
{
    int t1,t2,t3;
    printf("enter the t1:");
    scanf("%d",&t1);
    printf("enter the t2:");
    scanf("%d",&t2);
    printf("enter the t3:");
    scanf("%d",&t3);

    (t2+t3>t1 && t1+t3>t2 && t1+t2>t3)?printf("valid"):printf("Invalid");
   
}