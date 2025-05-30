//Write a program to count the number and chars in the string.
#include<stdio.h>
#include<conio.h>
int main()
{
char str[45];
int i=0,count=0;
printf("enter the string\n");
gets(str);
while(str[i]!='\0')
{
count++;
i++;
}
printf("total number of character in string: %d",count);
getch();
}