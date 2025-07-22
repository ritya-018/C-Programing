#include<stdio.h>
int main()
{
    int pid1,pid2,pid3,pid4,pid5;
    int price1,price2,price3,price4,price5;
    int qty1,qty2,qty3,qty4,qty5;
    char pnm1[100],pnm2[100],pnm3[100],pnm4[100],pnm5[100];
    int disper,disamt,payamt,total;


    printf("\nEnter the product no-1   :");
    scanf("%d",&pid1);

    printf("\nEnter the product name :");
    scanf("%s",&pnm1);

    printf("\nEnter the product price:");
    scanf("%d",&price1);

    printf("\nEnter the product QTY  :");
    scanf("%d,",&qty1);

    printf("\nEnter the product no-2  :");
    scanf("%d",&pid2);

    printf("\n\nEnter the product name :");
    scanf("%s",&pnm2);

    printf("\nEnter the product price:");
    scanf("%d",&price2);

    printf("\nEnter the product QTY  :");
    scanf("%d,",&qty2);

    printf("\nEnter the product no-3  :");
    scanf("%d",&pid3);

    printf("\nEnter the product name :");
    scanf("%s",&pnm3);

    printf("\nEnter the product price:");
    scanf("%d",&price3);

    printf("\nEnter the product QTY  :");
    scanf("%d,",&qty3);

    printf("\nEnter the product no-4  :");
    scanf("%d",&pid4);

    printf("\nEnter the product name :");
    scanf("%s",&pnm4);

    printf("\nEnter the product price:");
    scanf("%d",&price4);

    printf("\nEnter the product QTY  :");
    scanf("%d,",&qty4);

    printf("\nEnter the product no-5  :");
    scanf("%d",&pid5);

    printf("\nEnter the product name :");
    scanf("%s",&pnm5);

    printf("\nEnter the product price:");
    scanf("%d",&price5);

    printf("\nEnter the product QTY  :");
    scanf("%d,",&qty5);
    total=(price1*qty1)+(price2*qty2)+(price3*qty3)+(price4*qty4)+(price5*qty5);

    if(total>=10000)
    disper=10;
    else if(total>=9000)
    disper=8;
    else if(total>=5000)
    disper=5;
    else if(total>=3000)
    disper=3;
    else
    disper=0;

    disamt=(total*disper)/100;

    payamt=(total-disamt);

    printf("\n------------------------------------Dairy Product------------------------------------");
    printf("\n\e[38;2;200;0;0m|  Product no  |  Product name  |  Product Price  |  Product Qty  |  Product Total  |");
    printf("\n-------------------------------------------------------------------------------------");
    printf("\n|%14d|%16s|%17d|%15d|",pid1,pnm1,price1,qty1,(price1*qty1));
    printf("\n-------------------------------------------------------------------------------------");
    printf("\n|%14d|%16s|%17d|%15d|",pid2,pnm2,price2,qty2,(price2*qty2));
    printf("\n-------------------------------------------------------------------------------------");
    printf("\n|%14d|%16s|%17d|%15d|",pid3,pnm3,price3,qty3,(price3*qty3));
    printf("\n-------------------------------------------------------------------------------------");
    printf("\n|%14d|%16s|%17d|%15d|",pid4,pnm4,price4,qty4,(price4*qty4));
    printf("\n-------------------------------------------------------------------------------------");
    printf("\n|%14d|%16s|%17d|%15d|",pid5,pnm5,price5,qty5,(price5*qty5));
    printf("\n Product Total          :%d",total);
    printf("\n Discount percentage:%d",disper);
    printf("\n Discount amount        :%d",disamt);
    printf("\n payment amount         :%d",payamt);
    return 0;
}