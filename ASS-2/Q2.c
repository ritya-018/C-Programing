#include<stdio.h>
int main()
{
    int n;
    printf("Enter the given no:");
    scanf("%d",&n);
    if(n>10)
    {
        printf("no is positive:");
    }
    else
    {
        printf("no is negative");
    }
    return 0;
}