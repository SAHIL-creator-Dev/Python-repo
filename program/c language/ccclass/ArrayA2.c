//how to print revers values in array
#include<stdio.h>
#include<conio.h>
void main()
{
    int num[4];
    for(int i=0; i<4; i++)
    {
        printf("Enter Enement[%d] = ",i);
        scanf("%d",&num[i]);
    }
    for(int j=3; j>=0; j--)
    {
        printf("Element[%d] = %d\n",j,num[j]);
    }
    getch();
}