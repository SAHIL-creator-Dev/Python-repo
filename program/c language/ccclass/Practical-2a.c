//swap two variables using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("after swapping, first number : %d\n",a);
    printf("after swapping, second number : %d",b);
    getch();
}