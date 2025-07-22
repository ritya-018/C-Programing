#include<stdio.h>
int main()
{
    int id1,id2,id3,pr1,pr2,pr3,qty1,qty2,qty3,total,disp,disam,pyamt;
    char nm1[100],nm2[100],nm3[100];
    
    printf("\nEnter the id1   :");
    scanf("%d",&id1);
    printf("\nEnter the name  :");
    scanf("%s",&nm1);
    printf("\nEnter the price1:");
    scanf("%d",&pr1);
    printf("\nEnter the Qty1  :");
    scanf("%d",&qty1);

    printf("\nEnter the id2   :");
    scanf("%d",&id2);
    printf("\nEnter the name  :");
    scanf("%s",&nm2);
    printf("\nEnter the price2:");
    scanf("%d",&pr2);
    printf("\nEnter the Qty2  :");
    scanf("%d",&qty2);

    printf("\nEnter the id3   :");
    scanf("%d",&id3);
    printf("\nEnter the name  :");
    scanf("%s",&nm3);
    printf("\nEnter the price3:");
    scanf("%d",&pr3);
    printf("\nEnter the Qty3  :");
    scanf("%d",&qty3);

    total=(pr1*qty1)+(pr2*qty2)+(pr3*qty3);

    if(total>=10000)
    disp=10;
    else if(total>=80000)
    disp=8;
    else if(total>=50000)
    disp=5;
    else if(total>=30000)
    disp=3;
    else
    disp=0;
    
    
    disam=(total*disp)/100;
    pyamt=(total-disam);


    printf("\n--------------------------------------Product Details--------------------------------------");
    printf("\n|     ID      |        NAME       |     PRICE     |         QTY        |       TOTAL      |");
    printf("\n-------------------------------------------------------------------------------------------");
    printf("\n|%13d|%19s|%15d|%20d|%18d|",id1,nm1,pr1,qty1,(pr1*qty1));
    printf("\n-------------------------------------------------------------------------------------------");
    printf("\n|%13d|%19s|%15d|%20d|%18d|",id2,nm2,pr2,qty2,(pr2*qty2));
    printf("\n-------------------------------------------------------------------------------------------");
    printf("\n|%13d|%19s|%15d|%20d|%18d|",id3,nm3,pr3,qty3,(pr3*qty3));
    printf("\n-------------------------------------------------------------------------------------------");
    printf("\n\t\t\t\tTotal            :%d",total);
    printf("\n\t\t\t\tDiscount Price   :%d",disp);
    printf("\n\t\t\t\tDiscount amount  :%d",disam);
    printf("\n\t\t\t\tpayment amount   :%d",pyamt);
    return 0;
}