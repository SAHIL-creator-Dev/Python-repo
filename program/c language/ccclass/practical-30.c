//Print Fibonacci series up to N terms and its sum.
#include<stdio.h>
#include<conio.h>
long int recfib(int);
void main()
{
    int i,n,fibo; 
    printf("Enter number of terms\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        fibo = recfib(i);
        printf("%ld, ",fibo);
    }
    getch();
}
long int recfib(i)
{
    if(i<=1)
    return i;

    else
    return recfib(i-1)+recfib(i-2);
}