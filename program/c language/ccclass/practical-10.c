#include<stdio.h>
#include<conio.h>
void main()
{
    int i=10,a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    while(i<a)
    {
        printf("value of i : %d\n",i);
        i++;
        if(i>15)
        {
            break;
        }
    }
    printf("break executed\n");
    printf("final value of i : %d",i);
    getch();
}