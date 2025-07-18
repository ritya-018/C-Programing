#include<stdio.h>
int main()
{
    int roll;
    char name[100],sub1[100],sub2[100],sub3[100];
    float m1,m2,m3,total,avg;
    char grade;
    FILE *fp;

    fp=fopen("Result.txt","w");

    printf("Enter roll no:");
    scanf("%d",&roll);
    printf("\nEnter the name:");
    scanf("%s",&name);
    printf("\nEnter the sub1:");
    scanf("%s",&sub1);
    printf("\nEnter the sub2:");
    scanf("%s",&sub2);
    printf("\nEnter the sub3:");
    scanf("%s",&sub3);
    printf(" mark of sub 1:");
    scanf("%f",&m1);
    printf(" mark of sub 2:");
    scanf("%f",&m2);
    printf(" mark of sub 3:");
    scanf("%f",&m3);

    total=m1+m2+m3;
    avg=total/3;

    if(avg <= 100 && avg >=90)
       grade='o';
    else if(avg <= 90 && avg >=80)
       grade='A';
    else if(avg <= 80 && avg >=70)
       grade='B';
    else if(avg <= 70 && avg >=60)
       grade='C';
    else if(avg <= 60 && avg >=50)
       grade='D';
    else if(avg <= 50 && avg >=35)
       grade='E';
    else
       grade='F';

    fprintf(fp,"\n-------------Result---------------");
    fprintf(fp,"\n Rol no       :%d",roll);
    fprintf(fp,"\n Name         :%s",name);
    fprintf(fp,"\n subject 1    :%s",sub1);
    fprintf(fp,"\n Mark 1       :%f",m1);
    fprintf(fp,"\n subject 2    :%s",sub2);
    fprintf(fp,"\n Mark 2       :%f",m2);
    fprintf(fp,"\n subject 3    :%s",sub3);
    fprintf(fp,"\n Mark 3       :%f",m3);
    fprintf(fp,"\n total        :%f",total);
    fprintf(fp,"\n avg          :%f",avg);
    fprintf(fp,"\n Grade        :%c",grade);
    return 0;
}