#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n, temp;

    printf("Enter array size : ");
    scanf("%d",&n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        printf("Enter %dth elements : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("before using Insertion short : \n");
    for(i=0; i<n; i++){
    printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(i=0; i<n-1; i++){
        for(j=i+1; j>0; j--)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j];
                arr[j] = arr[j-1];
                arr[j-1]=temp;   
            }
        }
    }
    printf("after using Insertion short : \n");
    for(j=0; j<n; j++){
        printf("%d ",arr[j]);
    }
    return 0;
}

