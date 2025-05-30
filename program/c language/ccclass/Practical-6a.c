 //Write a program to find the largest number between given three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("greatest value is : %d",a);
        else
            printf("greatest value is : %d",c);
    }
    else
    {
        if(b>c)
            printf("greatest value is : %d",b);
        else
            printf("greatest value is : %d",c);
    }
    getch();
}

