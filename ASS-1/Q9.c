#include<stdio.h>
int main()
{
    int one,ten,five,amt;
    printf("enter the value:");
    scanf("%d",&amt);

    ten=amt/10;
    amt=amt%10;

    five=amt/5;
    amt=amt%5;

    one=amt/1;

    printf("\n%d",ten);
    printf("\n%d",five);
    printf("\n%d",one);
    return 0;
}