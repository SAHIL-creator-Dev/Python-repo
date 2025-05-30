#include<stdio.h>
#include<conio.h>

void selectionsort(int arr[],int n)
{
    int small_elm_idx;
    for(int i=0; i<n-1; i++)
    {
        small_elm_idx=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[small_elm_idx])
            {
                small_elm_idx=j;
            }
        }
        
            int temp=arr[i];
            arr[i]=arr[small_elm_idx];
            arr[small_elm_idx]=temp;
        

    }
}

int main()
{
    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("%dth element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("before using selection sort - \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
     printf("\n");
    printf("After using selection sort -\n");
    selectionsort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}