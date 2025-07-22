#include<stdio.h>
int main()
{
    int hour,min,sec;
    printf("enter the sec:");
    scanf("%d",&sec);
    printf("Enter the min:");
    scanf("%d",&min);
    printf("Enter the hour :");
    scanf("%d",&hour);

    if(sec>0&&sec<60 && min>0&&min<60 && hour>0&&hour<24)
    {
        printf("Time is valid:");
    }
    else
    {
        printf("not valid");
    }
    
}