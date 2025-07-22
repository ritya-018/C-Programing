#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first no:");
    scanf("%d",&a);
    printf("Enter the second no:");
    scanf("%d",&b);
    if(a==b)
    {
        printf("equal to equal :");
    }
    else if(a>b)
    {
        printf("Greater than equal:");
    }
    else if(a<b)
    {
        printf("Less than equal to:");
    }
    else
    {
        printf("invalid");

    }
    
}