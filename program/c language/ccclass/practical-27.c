//program for swapping two variable using call by variable.
#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    swap(a,b);
    getch();
}
void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("after swapping, first value : %d\n",a);
    printf("after swapping, second value : %d",b);
}