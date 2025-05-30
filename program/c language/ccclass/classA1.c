#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    char opr;
    printf("Enter first value : \n");
    scanf("%d",&a);
    printf("Enter operator : \n");
    scanf("%c",&opr);
    printf("Enter second value : \n");
    scanf("%d",&b);
    switch(opr)
    {
        case '+' :
        printf("%d+%d = %d",a,b,a+b);
        break;
        case '-' :
        printf("%d-%d = %d",a,b,a-b);
        break;
        case '*' :
        printf("%d*%d = %d",a,b,a*b);
        break;
        case'/' :
        printf("%d/%d = %d",a,b,a/b);
        break;
        default :
        printf("you enterd rong operator");
    }
    getch();
}