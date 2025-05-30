#include<stdio.h>
#include<conio.h>
void main()
{
    int age = 32;
    int *pnt = &age;
    printf("ptr = %u\n",pnt);
    pnt++;
    printf("Ptr = %u",pnt);
    getch(); 
}