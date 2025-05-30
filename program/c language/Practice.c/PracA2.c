#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int p,r,t,SI,CI;
    printf("Enter the principle amt. : ");
    scanf("%d",&p);
    printf("Enter the rate : ");
    scanf("%d", &r);

    printf("Enter the time (in year) : ");
    scanf("%d", &t);

    SI = p*r*t/100;
    CI = p*pow(1+r/100,t);
    printf("SI = %d\nCI = %d",SI,CI);
    getch();
}