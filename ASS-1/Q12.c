#include<stdio.h>
int main()
{
    char input;
    printf(" Enter the character :");
    scanf("%c",&input);
    printf("\nEnter input char:%c",input);
    printf("\nasscci char:%c",input-1);
    printf("\nAfter char:%c",input+1);
    return 0;
}