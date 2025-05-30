#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,count;

    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        count = 0;
        for(j=2; j<i; j++)
        {
            
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d  ",i );
        }
    }

    return 0;
}