#include<stdio.h>
int main()
{
    int n;
    printf("Enter the given no:");
    scanf("%d",&n);
    if(n>0)
    {
         if(n%5==0 && n%7==0)
        {
          printf("\nThe no is div by 5 and 7");
        }
         else
        {
             printf("\nThe no is not divisible by 5 & 7 ");
        }
    } 
    else
    {
        printf("\nNo is Negative");
    }


    
}