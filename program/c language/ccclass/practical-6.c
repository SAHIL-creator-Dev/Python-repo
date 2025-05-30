//program to print various conditional statements for a value using 'else if' statement.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    if(a<0)
    {
        printf("%d is negative\n",a);
    }
    else if(a>0 && a<10)
    {
        printf("%d is leis b/w 0 & 10\n",a);
    }
    else if(a>10 && a<20)
    {
        printf("%d is leis b/w 10 & 20\n",a);
    }
    else
    {
        printf("none of value is not\n");
    }
    printf("value of a is : %d",a);
    getch();
}