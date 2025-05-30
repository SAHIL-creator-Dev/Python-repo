#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,t;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i = 1; i <= 10; i++)
    {
        t = n*i;
        printf("%d*%d=%d\n",n,i,t);
    }
    getch();
}