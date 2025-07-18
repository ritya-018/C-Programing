#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Anything:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=97)
        printf("captial letter:");
    else if(ch>=97 && ch<=122)
        printf("small letter:");
    else if(ch>=48 && ch<=57)
        printf("Digit ....:");
    else
        printf("special char..");
    return 0;
}