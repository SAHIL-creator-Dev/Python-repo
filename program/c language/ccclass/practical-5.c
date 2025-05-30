//program to print 'a' is less then 20 or greater then 20.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    if(a<20)
    {
        printf("%d is less then 20\n",a);
    }
    else
    {
        printf("%d is greater then 20\n",a);
    }
    printf("value of a is : %d",a);
    getch();
}