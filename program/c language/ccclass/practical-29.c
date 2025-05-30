//find the factorial of given number through the Recursion.
#include<stdio.h>
#include<conio.h>
long int recfact(int);
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    long int fact = recfact(n);
    printf("factorial of the number : %ld",fact);
    getch();
}
long int recfact(int n)
{
    if(n>=1)
    return n*recfact(n-1);

    else
    return 1;
}