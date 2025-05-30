//program to print 'a' is less then 20.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter number \n");
    scanf("%d",&a);
    if(a<20)
    {
        printf("Yes 'a' is less then 20\n");
    }
    printf("value of a is %d",a);
    getch();
}