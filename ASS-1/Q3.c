#include<stdio.h>
int main()
{
    float f,c,k;
    printf("enter the Fahrenheit:");
    scanf("%f",&f);
    c=5/9*(f-32);
    printf("Celsius is:%f",c);
    k=c+273.15;
    printf("\nKelvin is:%f",k);
    return 0;
}