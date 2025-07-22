#include<stdio.h>
int main()
{
    int s,m,h;
    printf("enter the s:");
    scanf("%d",&s);
    printf("Enter the m:");
    scanf("%d",&m);
    printf("Enter the h :");
    scanf("%d",&h);
    if(s<=60)
    {
        
        if(m<=60)
        {
            
            if(h<=24)
            {
                printf("valid");
            }
            else
            {
                printf(" Invalid");
            }
        }
        
       
    }
    
    return 0;
}