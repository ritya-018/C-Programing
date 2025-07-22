#include<stdio.h>
int main()
{
    int id,pr1,pr2,pr3,qty1,qty2,qty3,total,disp,disam,pyamt;
    char nm[100];
    printf("Enter the id    :");
    scanf("%d",&id);
    printf("Enter the name  :");
    scanf("%s",&nm);
    printf("enter the price1:");
    scanf("%d",&pr1);
    printf("enter the price2:");
    scanf("%d",&pr2);
    printf("enter the price3:");
    scanf("%d",&pr3);
    printf("Enter the Qty1  :");
    scanf("%d",&qty1);
    printf("Enter the Qty2  :");
    scanf("%d",&qty2);
    printf("Enter the Qty3  :");
    scanf("%d",&qty3);
    
    total=(pr1*qty1)+(pr2*qty2)+(pr3*qty3);
    if(total>=10000)
      disp=10;
    else if(total>=80000)
      disp=8;
    else if(total>=50000)
      disp=5;
    else if(total>=30000)
      disp=2;
    else
      disp=0;
    disam=(total*disp/100);
    pyamt=total-disam;
    printf("\nProduct id  :%d",id);
    printf("\nProduct name:%s",nm);
    printf("\ntotal amount:%d",total);
    printf("\nDiscount amt:%d",disam);
    printf("\npercentage  :%d",disp);
    
    return 0;
}