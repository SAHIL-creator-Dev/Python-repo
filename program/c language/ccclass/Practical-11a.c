//Read an integer number, find the number of digits and sum of all individual digits and also print the above numbers in reverse order.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,r=0,sum=0,d,count = 0,dig=1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        if (i==dig)
        {
            count = count+1;
            dig = dig*10;
            continue;
        }
        
    }

    while(n>0)
    {
        d= n%10;
        sum = sum+d;
        r = (r*10)+d;
        n = n/10;
    }
    
    printf("number of digits : %d\n",count);
    printf("Sum of all individual digits : %d\n",sum);
    printf("above number in reversed order : %d",r);
    getch();
}