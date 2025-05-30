//print the greatest number among the n elements using array.
#include <stdio.h>
#include<conio.h>

void main() {
    int n;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    int element[n];
    for (int i = 0; i < n; i++) {
        printf("Enter %dth element: ", i+1);
        scanf("%d", &element[i]);
    }
    for (int i = 1; i < n; i++) {
        if (element[i] > element[0]) {
            element[0] = element[i];
        }
    }
    printf("The greatest number among the four is %d.\n", element[0]);
    getch();
}
