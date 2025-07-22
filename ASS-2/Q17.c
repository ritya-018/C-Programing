#include<stdio.h>
int main()
{
    int rent1,rent2,rent3,qty1,qty2,qty3,dis,dis_amt,total,totalpay;
    char item1[100],item2[100],item3[100];


    printf("Enter the item1:");
    scanf("%s",&item1);
    printf("Enter the rent1 :");
    scanf("%d",&rent1);
    printf("Enter the qty1:");
    scanf("%d",&qty1);

    printf("Enter the item2:");
    scanf("%s",&item2);
    printf("Enter the rent2 :");
    scanf("%d",&rent2);
    printf("Enter the qty2:");
    scanf("%d",&qty2);

    printf("Enter the item3:");
    scanf("%s",&item3);
    printf("Enter the rent3 :");
    scanf("%d",&rent3);
    printf("Enter the qty3");
    scanf("%d",&qty3);

    total=(rent1+qty1)*(rent1+qty2)*(rent3+rent3);

    if(total>100000)
    dis=20;
    else if(total>80000)
    dis=15;
    else if(total>50000)
    dis=10;
    else if(total>30000)
    dis=8;

    dis_amt=(total-dis)/100;
    totalpay=(total-dis_amt);

    printf("\n----------------Item Details----------------");
    printf("\n|   Item  |   Rent  |   Qty  |   Total  |");
    printf("\n------------------------------------------------");
    printf("\n%9s|%9d|%8d|%10d",item1,rent1,qty1,(rent1*qty1));
    printf("\n------------------------------------------------");
    printf("\n%9s|%9d|%8d|%10d",item2,rent2,qty2,(rent2*qty2));
    printf("\n------------------------------------------------");
    printf("\n%9s|%9d|%8d|%10d",item3,rent3,qty3,(rent3*qty3));
    printf("\n\t\t\t\ttotal is........:%d",total);
    printf("\n\t\t\t\tdiscount per....:%d",dis);
    printf("\n\t\t\t\tdiscount amt....:%d",dis_amt);
    printf("\n\t\t\t\tTotal pay   ....:%d",totalpay);



    return 0;
    
}