#include<stdio.h>
#include<conio.h>
#include<math.h>
int power(int a, int b);
void main()
{
    int a,b,result;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    result = power(a,b);
    printf("result : %d",result);
    getch();
}
int power(int a,int b)
{
    int result;
    result = pow(a,b);
    return result;
}