#include<stdio.h>
#include<conio.h>
void main()
{
    int num[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter %dth number = ",i+1);
        scanf("%d",&num[i]);
    }
    for(int j=0; j<10; j++)
    {
        if(num[j]<33)
        {
            printf("your num is = %d\n",num[j]);
            printf("you are fail\n");
            printf("index no is = %d\n",j);
        }
    }
    getch();
}