//print Rhombus pattern.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter number of row : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        printf(" ");
        for(j=1; j<=n; j++)
        printf("*");
        
        printf("\n");
    }
}