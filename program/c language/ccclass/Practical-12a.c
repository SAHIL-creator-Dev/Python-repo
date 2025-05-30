//Print Fibonacci series up to N terms and its sum.
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,a=0,b=1,c,sum=0;
  printf("Enter number of terms : ");
  scanf("%d",&n);

  printf("Fibonacci series up to %d numbers : \n",n);

  for(i=0; i<=n; i++)  
  {
    if(i<=1)
    {
    c=i;
    sum = sum + c;
    }
    else
    {
        c = a+b;
        a = b;
        b = c;
        
    }
    printf("%d  ",c);
    sum = sum + c;
  }
  printf("\nsum of the series : %d", sum);
  getch();
}