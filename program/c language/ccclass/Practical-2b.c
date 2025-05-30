//swap two variables without using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter first variable : ");
    scanf("%d",&a);
    printf("Enter second variable : ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("after swapping, first variable : %d\n",a);
    printf("after swapping, second variable : %d",b);
    getch();
}