//print Hollow square pattern.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,m;
    printf("Enter number of row : ");
    scanf("%d",&n);
    printf("Enter number of column : ");
    scanf("%d",&m);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(i==1||j==1||i==n||j==m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}