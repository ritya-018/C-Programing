#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("\n1.addition\n2.substraction\n3.multiplication\n4.division");
    printf("\nEnter the choice:");
    scanf("%d",&ch);
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
     case 1:printf("Addition no:%d",(a+b));
           break;
     case 2:printf("substration no:%d",(a-b));
           break;    
     case 3:printf("multiplication no:%d",(a*b));  
           break;
     case 4:printf("Division no:%d",(a/b));
           break;
     default :
          printf("Invalid ");
    }
    return 0;                 
}