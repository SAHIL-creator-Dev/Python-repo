//passing an entire array into a function.
#include<stdio.h>
#include<conio.h>
int avgarray(int num[])
{
    int i,sum=0;
    float avg;
    for(i=0; i<4; i++)
    {
        sum = sum+num[i];
    }
    avg = sum/4;
    return avg; 
}
void main()
{
    int num[4] = {20,15,17,18};
    float avg = avgarray(num);
    printf("avg = %f",avg);
    getch();
}
