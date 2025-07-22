#include<stdio.h>
int main()
{
    int t1,t2,t3,t4,t5,t6;
    printf("enter the t1:");
    scanf("%d",&t1);
    printf("enter the t2:");
    scanf("%d",&t2);
    printf("enter the t3");
    scanf("%d",&t3);
    if(t1>t3 && t1>t2)
    {
        t4=t2+t3;
        
        if(t4>t1)
            printf("valid");
        else
            printf("Invalid");
        
    }
    else if(t2>t3 && t2>t1)
    {
        
        t5=t1+t3;
        
        if(t5>t2)
        {
            printf("valid");
        }
        else{printf(" Invalid:");}
    }
    else
    {
        
        t6=t1+t2;
    
        if(t6>t3)
        {
            printf("\nvalid");
        }
        else{printf("\nInvalid");}
    }
    return 0;
}