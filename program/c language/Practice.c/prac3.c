#include<stdio.h>
#include<conio.h>
struct st {
    char name[20];
    long int reg;
    int marks;
    int total;
};
void main()
{
    int i,j,as,n,sub,tot=0;
    printf("Enter size of array : ");
    scanf("%d",&as);

    printf("Enter no of sub : ");
    scanf("%d",&sub);

    printf("Enter no of students : ");
    scanf("%d",&n);

    struct st a[as];

    printf("students details - ");
    for(i=1; i<=n; i++)
    {
        printf("\nEnter %dth student name : ",i);
        scanf("%s",a[i].name);
        
        for(j = i; j<=i; j++)
        {
            printf("Enter reg no : ");
            scanf("%ld",&a[i].reg);
        }

        for(j=1; j<=sub; j++)
        {
            printf("Enter %dth marks : ",j);
            scanf("%d",&a[j].marks);
            tot = tot+a[j].marks;
        }
        a[i].total = tot;
        
        printf("%d th student name : %s\nreg. no. : %ld\ntotal no : %d\n",i,a[i].name,a[i].reg,a[i].total);
    getch();
    }
    
}