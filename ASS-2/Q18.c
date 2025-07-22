#include<stdio.h>
int main()
{
    int no;
    printf("Enter the late dayss..:");
    scanf("%d",&no);

    if(no<5)
    printf("the fine is 100 Rs");
    else if(no<10)
    printf("The fine is 200 Rs");
    else if(no>10)
    printf("The fine is 300 Rs");
    return 0;
}