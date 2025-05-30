#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n, temp;

    printf("Enter array size : ");
    scanf("%d",&n);

    int arr[n];

    for(i=1; i<=n; i++)
    {
        printf("Enter %dth elements : ",i);
        scanf("%d",&arr[i]);
    }
    printf("before using bubble short : \n");
    for(i=1; i<=n; i++){
    printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(i=1; i<n; i++){
        for(j=1; j<=n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;   
            }
        }
    }
    printf("after using bubble short : \n");
    for(j=1; j<=n; j++){
        printf("%d ",arr[j]);
    }
    return 0;
}

