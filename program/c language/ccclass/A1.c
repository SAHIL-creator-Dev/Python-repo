#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    long int result = 1;
    float e;
    printf("Enter base : ");
    scanf("%d",&n);
    printf("Enter power : ");
    scanf("%f",&e);
    for(i=1;i<=e;i++)
    {
        if(n%2==0)
        {
            result = result*n;
        }
        else
        {
            printf("not a even number\n");
            break;
        }
    }
    printf("result = %ld",result);
    getch();
}