#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charater:");
    scanf("%c",&ch);

    if(ch>=48 && ch<=57)
    
        printf("The digit no:");

    else if(ch>=97 && ch<=122)
    
        printf("The Lowercase char:");
    
    else if(ch>=65 && ch<=90)
    
        printf("The Upper case..:");
    
    else
    
        printf("It is not Found");
    
    return 0;
}