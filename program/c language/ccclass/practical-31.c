//print elements using array.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n[10],i,j;
    for(i=0;i<10;i++)
    {
        n[i] = i+100;
    }
    for(i=0;i<10;i++)
    {
        printf("Element[%d] = %d\n",i,n[i]);
    }
    getch();
}