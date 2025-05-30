#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20], *ptr;
    int i=0;
    printf("Enter Any string (below 20 chars) : ");
    gets(str);
    ptr = str;
    while (*ptr != '\0')
    {
        i++;
        ptr++;
    }
    printf("Length of String : %d", i);
    getch();
}