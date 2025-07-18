#include<stdio.h>
int main()
{
    int id,tax;
    char name[100];
    float bs,da,hra,totals;
    FILE *fp;
    fp=fopen("Emp.txt","w");
    printf("enter the id:");
    scanf("%d",&id);
    printf("enter the name:");
    scanf("%s",&name);
    printf("enter the basic salary:");
    scanf("%f",&bs);
    printf("enter the d alounce(%%):");
    scanf("%f",&da);
    printf("enter the house rent(%%):");
    scanf("%f",&hra);
    if(bs >=100000)
    tax=20;
    else if(bs >=80000)
    tax=15;
    else if(bs >=50000)
    tax=10;
    else if(bs >=30000)
    tax=5;
    else
    tax=0;
    totals=bs+((bs*(da+hra-tax))/100);
    fprintf(fp,"\n..........Edetail..........");
    fprintf(fp,"\nEnter total salary:%f",totals);
    fprintf(fp,"\nthe tax iss:%d",tax);
    return 0;

}