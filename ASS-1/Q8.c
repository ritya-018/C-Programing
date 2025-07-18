#include<stdio.h>
int main()
{
        int id,bs;
        float ba=30,hr=10,ptax=5,hs;
        printf("Enter Employee Id:");
        scanf("%d",&id);
        printf("Enter Basic Salary:");
        scanf("%d",&bs);
        hr=(bs*hr/100);
        ba=(bs*ba/100);
        ptax=(bs*ptax/100);
        hs=(bs-hr-ba-ptax);
        printf("\nHouse Rent:%f",hr);
        printf("\nBasic Dearness:%f",ba);
        printf("\nP tax :%f",ptax);
        printf("\n home salary:%f",hs);
        return 0;
}
  int empid,bs;
    float hra=30,da=10,tax=5,homesal;
    printf("enter the emp id");
    scanf("%d",&empid);
    printf("enter the basic sal:");
    scanf("%d",&bs);

    hra=(bs*hra/100);
    da=(bs*da/100);
    tax=(bs*tax/100);


    homesal=(bs-hra-da-tax); 

    printf("\n%f",hra);
    printf("\n%f",da);
    printf("\n%f",tax);
    printf("\nhome salary:%f",homesal);
    return 0;