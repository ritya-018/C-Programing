#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the Exprestion");
    scanf("%d %c %d",&a,&op,&b);
    switch(op)
    {
        case '+':
        printf("Addition is:%d%c%d is:%d",a,op,b,(a+b));
        break;
        case '-':
        printf("Substraction is:%d%c%d is %d",a,op,b,(a-b));
        break;
        case '*':
        printf("Multipliction is :%d%c%d is %d",a,op,b,(a*b));
        break;
        case '/':
        printf("division is :%d%c%d is %d",a,op,b,(a/b));
        break;
        default:printf("Invaid");
    }
    return 0;
}