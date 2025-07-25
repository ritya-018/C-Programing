#include<stdio.h>
int main()
{
    int x,y,choice,r,a;
    printf("\n1.Equality\n2.Less than\n3.Quotient & Reminder\n4.Range\n5.swap\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
    printf("Enter the any no:");
    scanf("%d %d",&x,&y);
    switch(choice)
    {
        case 1:(x==y)?printf("Equal"):printf("Not equal");
        break;
        case 2:(x<y)?printf("X is Less than Y"):printf("X is not Less than Y");
        break;
        case 3:(r=x/y)?printf("the no Quotient:%d",r):printf("the no not Quotient:%d",r);
               (r=x%y)?printf("\nthe no Reminder :%d",r):printf("\nthe no not Reminder:%d",r);
        break;
        case 4:
            printf("Enter the no:");
            scanf("%d",&a);
            (y>a && a>x )?printf("inbetween"):printf("not Between");
        
       
        break;
        case 5:x=x+y;y=x-y;x=x-y;printf("%d %d",x,y);
               break;
        default:printf("not choice:");
    }
    return 0;
}