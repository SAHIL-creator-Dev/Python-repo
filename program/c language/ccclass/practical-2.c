//Program to print sum of three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,sum;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    sum = a+b+c;
    printf("%d+%d+%d = %d",a,b,c,sum);
    getch();
}