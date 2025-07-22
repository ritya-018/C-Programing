#include<stdio.h>
int main()
{
    char s1[100],s2[100],s3[100];
    int  m1,m2,m3,avg,total;
    printf("Enter the 1 st sub :");
    scanf("%s",&s1);
    printf("Enter the 2 nd sub :");
    scanf("%s",&s2);
    printf("Enter the 3 rd sub :");
    scanf("%s",&s3);


    printf("enter the mark 1:");
    scanf("%d",&m1);
    printf("enter the mark 2:");
    scanf("%d",&m2);
    printf("enter the mark 3:");
    scanf("%d",&m3);


    total=(m1+m2+m3);
    avg=(total/3);
    printf("\ntotal is :%d",total);
    printf("\naverage is :%d",avg);

    if(avg>90)
    printf("\nClass I :");
    else if(avg>60)
    printf("\nClass II :");
    else if(avg>35)
    printf("\nPass Class :");
    else 
    printf("\nFail..... :");
    
    return 0;
}