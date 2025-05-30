//Write a program to read the unit consume for a customer and calculate the total bill.
#include<stdio.h>
#include<conio.h>
void main()
{
    int unit;
    float amt;
    printf("Enter unit : ");
    scanf("%d",&unit);
    if(unit>=0 && unit<=200)
    {
        amt = 0.50*unit;
    }
    else if(unit>200 && unit<=400)
    {
        amt = 100+0.65*unit+(unit-200);
    }
    else if(unit>400 && unit<=600)
    {
        amt = 250+0.85*unit+(unit-400);
    }
    else
    {
        amt = 390+1.00*unit+(unit-600);
    }
    printf("Total amt is : %f",amt);
    getch();
}