//passing a single element of an array to a function.
#include<stdio.h>
#include<conio.h>
void display(int age)
{
    printf("age = %d",age);
}
void main()
{
    int agearray[] = {12,15,20};
    display(agearray[2]);
    getch();
}