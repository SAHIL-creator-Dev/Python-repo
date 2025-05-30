#include<stdio.h>
#include<conio.h>
int sumarr(int num[])
{
    int i,sum=0;
    for(i=0;i<3;i++)
    {
        sum = sum+num[i];
    }
    return sum;
}
void main()
{
    int a,b,c,sum;
    printf("Enter first value: ");
    scanf("%d",&a);
    printf("Enter second value: ");
    scanf("%d",&b);
    printf("Enter third value: ");
    scanf("%d",&c);
    int num[] = {a,b,c};
    sum = sumarr(num);
    printf("sum of three number : %d",sum);
    getch();
}