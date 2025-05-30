//program to print a statement for negative values.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    if(a<0)
    {
        printf("value is negative\n");
    }
    printf("value of a is : %d",a);
    getch();
}