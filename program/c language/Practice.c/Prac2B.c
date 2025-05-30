#include<stdio.h>
#include<conio.h>
void main()
{
    int days, month,re_day;
    
    printf("Enter number of days : ");
    scanf("%d",&days);
    
    month = days/30;
    re_day = days%30;

    printf("%d month and %d days ",month,re_day);
    getch();
}