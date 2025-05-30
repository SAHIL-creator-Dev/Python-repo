#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    long int fact = 1;
    printf("Enter number : ");
    scanf("%d",&num);
    while(num>0)
    {
        fact = fact*num;
        num--;
    }
    printf("factorial of %d = %d",num,fact);
    getch();
}