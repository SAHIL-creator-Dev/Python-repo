//find factorial of a number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        fact = fact*i;
    }
    printf("factorial of %d = %d",n,fact);
    getch();
}