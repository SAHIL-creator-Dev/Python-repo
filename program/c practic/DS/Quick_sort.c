#include<stdio.h>
#include<conio.h>

int partition(int arr[],int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;

            int temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i]=pivot;
    arr[high] = temp;
    return i; //pivot index
}

void quickshort(int arr[],int low, int high)
{
    if(low<high)
    {
        int pivot_idx = partition(arr,low,high);
        quickshort(arr,low,pivot_idx-1);
        quickshort(arr, pivot_idx+1,high);
    }
}

int main()
{
    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];

    // inserting all elements in the array
    for(i=0; i<n; i++)
    {
        printf("Enter %dth element : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("before Quick sort - \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }

    quickshort(arr,0,n-1);

    printf("\nAfter Quick sort - \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}