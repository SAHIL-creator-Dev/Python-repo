#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],n,i;
int *p;
p=&arr[0];

printf("Enter the number of elements to store:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("element-%d:",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("%d,",p[i]);
}
getch();
}