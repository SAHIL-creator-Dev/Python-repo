#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("enter m : ");
    scanf("%d",&m);
    int i = 1;
    while(i<=n)
    {
        if(i==m)
        {
            break;
        }
        printf("%d\n",i);
        i++;
    }
}