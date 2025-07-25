#include<stdio.h>
int main()
{
    int choice;
    float r,aoc,coc,voc;
    printf("\n1.AOC\n2.COC\n3.VOS");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    printf("\nEnter your radius:");
    scanf("%f",&r);

    switch(choice)
    {
        case 1:aoc=(3.14)*r*r;
        printf("THe AOC is %f",aoc);
        break;
        case 2:coc=2*(3.14*r*r);
        printf("The COC is %f",coc);
        break;
        case 3:voc=(4.0/3.0)*3.14*r*r*r;
        printf("The VOC is%f",voc);
        break;
        default:printf("Invalid choice");
        break;
    }
    return 0;
}