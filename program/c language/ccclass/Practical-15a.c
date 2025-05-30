#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
int i;
int arr[5]={5,8,7,9.0};
printf("the array before the sort:\n");
for(i=0;i<5;i++)
{
    printf("%d\t",arr[i]);
}
sort(arr,5);
printf("\nthe array after the shot:\n");
for(i=0;i<5;i++)
{
    printf("%d\t",arr[i]);
}
getch();
}
void sort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}