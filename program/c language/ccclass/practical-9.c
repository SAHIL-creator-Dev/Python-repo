//program to creat a simple calculator.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,ch;
    printf("Enter two no : \n");
    scanf("%d%d",&a,&b);
    
    printf("Enter switch\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("%d+%d=%d",a,b,a+b);
        break;

        case 2:
        printf("%d-%d=%d",a,b,a-b);
        break;

        case 3:
        printf("%d*%d=%d",a,b,a*b);
        break;

        case 4:
        printf("%d/%d=%d",a,b,a/b);
        break;

        default:
            printf("invalid value");
    }
    return 0;
}