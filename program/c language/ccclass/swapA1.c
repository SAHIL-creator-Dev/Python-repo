#include<stdio.h>
#include<conio.h>
void swap(int*x,int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main()
{
    int a = 100;
    int b = 200;
    printf("before swap, value of a : %d\n",a);
    printf("before swap, value of b : %d\n",b);
    swap(&a,&b);
    printf("After swap, value of a : %d\n",a);
    printf("After swap, value of b : %d\n",b);
    getch();
}