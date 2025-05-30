//how to change index value in array.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num[4];
    for(int i=0; i<4; i++){
    printf("Enter Element[%d] = ",i);
    scanf("%d",&num[i]);
    }
    num[0] = 1;
    num[1] = 2;
    printf("Element[0] = %d\n",num[0]);
    printf("Element[1] = %d",num[1]);
    getch();
}