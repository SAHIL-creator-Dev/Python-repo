#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    while(a<20)
    {
        if(a==15)
        {
            a++;
            printf("continue executed\n");
            continue;
        }
        printf("value of a is %d\n",a);
        a++;
    }
    getch();
}