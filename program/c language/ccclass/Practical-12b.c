//Print whether a given year is leap or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);

    if(year%400==0 || year%4==0 && year%100!=0)
        printf("%d year is leapyear ",year);

    else
        printf("%d year is not leapyear ",year);

    getch();
}