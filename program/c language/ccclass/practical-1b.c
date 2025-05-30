#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int SI,CI,p,r,t;
    printf("Enter principle amount(p) : ");
    scanf("%d",&p);
    printf("Enter rate in percentage(r): ");
    scanf("%d",&r);
    printf("Enter times in year : ");
    scanf("%d",&t);
    SI = p*r*t/100;
    CI = p*(pow(1+r/100,t));
    printf("simple interest = %d\n",SI);
    printf("Coumpound interest = %d",CI);
    getch();
}