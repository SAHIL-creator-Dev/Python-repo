//convert a given number of days into months and days using integer arithmetic operator.
#include<stdio.h>
#include<conio.h>
void main()
{
    int days,months,n;
    printf("Enter number of days: ");
    scanf("%d",&n);
    months = n/30;
    days = n%30;
    printf("months = %d\ndays = %d",months,days);
    getch();
}