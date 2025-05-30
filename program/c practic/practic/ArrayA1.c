#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,num[100],greater;
    printf("Enter total numbers = ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("%dth number = ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=1; i<n; i++)
    {
        if(num[0]>num[i])
        greater = num[0];
        else
        num[0] = num[i];

    }
     printf("greatest value is = %d",greater);
        getch();
}