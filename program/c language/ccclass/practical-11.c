#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n<0)
        {
            printf("Exiting loop");
            break;
        }
        sum = sum+i;
    }
    printf("sum of first %d numbers = %d",n,sum);
    getch();
}