#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter any Everthingg");
    scanf("%c",&ch);
    if(isupper(ch))
    printf("captital :");
    else if(islower(ch))
    printf("Small:"); 
    else if(isdigit(ch))
    printf("digit:");
    else
    printf("special char:");
    return 0;
}