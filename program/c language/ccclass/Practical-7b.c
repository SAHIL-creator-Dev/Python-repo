//print prime number up N times.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,n,count=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(num=2; num<=n; num++)
    {
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",num);
        }
    }
    return 0;
}