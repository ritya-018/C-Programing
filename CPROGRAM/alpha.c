#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the Alphabetss.:");
    scanf("%c",&ch);
    ch=tolower(ch); 
    
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("Vowelss...");
        break;
        default:printf("Consant..");
    }
    return 0;
}