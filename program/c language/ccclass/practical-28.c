//function call without parameter.
#include<stdio.h>
#include<conio.h>
void circle_area();
void main()
{
    circle_area();
    getch();
}
void circle_area()
{
    float r,area;
    printf("Enter radius of a circle : ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("area of the circle : %f",area);
}