#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len;
    printf("Enter the string:");
    scanf("%s",&str);
    len=strlen(str);
    printf("Length of string:%d",len);
    return 0;
}