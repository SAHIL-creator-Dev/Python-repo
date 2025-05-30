#include<stdio.h>
#include<conio.h>
struct students
{
    int marks;
    int total_marks;
};
void main()
{
    int i,j,n,total = 0,sa,sub;
    printf("Enter size of array: ");
    scanf("%d",&sa);

    struct students st[sa];
    printf("Enter no. of students : ");
    scanf("%d",&n);

    printf("Enter no of subject : ");
    scanf("%d",&sub);
   
    printf("students marks - \n");
    for(i=0; i<n; i++)
    {
        printf("%dth student marks- \n",i+1);
        for(j=0; j<sub; j++)
        {
        printf("subject_%d : ",j+1);
        scanf("%d",&st[j].marks);
        total = total+st[j].marks;
        }
        st[i].total_marks = total;
    }
    printf("students info list-\n");
    for(i=0; i<n; i++)
    {
        printf("%dth students total marks : %d\n",i+1, st[i].total_marks);
    }
    getch();
}