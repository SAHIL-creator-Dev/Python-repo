//Write a program converts the given temperature in Fahrenheit to Celsius using preprocessor.
#include<stdio.h>
#include<conio.h>
void main()
{
    float F,C;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f",&F);
    C = (F-32)*5/9;
    printf("temperature in celsius : %f",C);
    getch();
}