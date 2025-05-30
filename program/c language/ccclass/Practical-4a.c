//Write a program the use of variables in expression and their evaluation.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    float calculate;
    printf("Enter first variable : ");
    scanf("%d",&a);
    printf("Enter second variable : ");
    scanf("%d",&b);
    printf("Enter third variable : ");
    scanf("%d",&c);
    calculate = a/2*b+2-c;
    printf("solution = %f",calculate);
    getch();
}