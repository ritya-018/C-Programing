#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the Lower case :");
    scanf("%c",&ch);
    ch=toupper(ch);
    ch=tolower(ch);
    printf("To Upper Case:%c",ch);
    printf("To lower case:%c",ch);
    return 0;
}