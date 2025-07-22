#include<stdio.h>
int main()
{
    int cost,sell,pro,loss;
    printf("Enter the cost price:");
    scanf("%d",&cost);
    printf("Enter the selling price:");
    scanf("%d",&sell);
    if(sell>=cost)
    {
    pro=sell-cost;
    printf("\nProfit :%d",pro);
    }
    else
    {
    loss=sell-cost;    
    printf("\nLoss:%d",loss);
    }
    return 0;
}