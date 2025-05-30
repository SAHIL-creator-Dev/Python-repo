//print inverted right half pyramid.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter number of row : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        printf("*");
    printf("\n");
    }
    getch();
}