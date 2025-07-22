#include<stdio.h>
int main()
{
    int n;
    printf("Enter the given no:");
    scanf("%d",&n);
    if(n%5==0 || n%7==0)
       {
         printf("the no is div by 5 and 7");
       }
    else if(n%5!=0 || n%7!=0)
        {
          printf("the no not is div by 5 and 7");
        }
        return 0; 
}