#include<stdio.h>
int main()
{
   int bsal,tax;
   printf("Enter the basic salary:");
   scanf("%d",&bsal);
   if(bsal < 150000)
   tax=0;
   if(150000 < bsal && bsal >300000)
   tax=20;
   if(bsal > 300000)
   tax=30;

   printf("Income tax is =%d",tax);
   return 0;

}