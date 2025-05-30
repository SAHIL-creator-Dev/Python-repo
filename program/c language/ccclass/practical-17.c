#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0;
    do
    {
        printf("Enter number : ");
        scanf("%d",&num);
        sum = sum+num;
    }
    while(num!=0);
    printf("sum of numbers : %d",sum);
    getch();
}