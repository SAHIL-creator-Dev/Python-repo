#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 5

int top=-1,stack[MAX];
void main()
{
    int ch;
    while(1) 
    {
        printf("\nStack Menu\n");
        printf("choice-1: Push, choice-2: Pop,  choice-3: Display,   choice-4: Exit\n");
        printf("Enter your choice(1-4):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Wrong Choice!!\n"); 
        }
    }
}
    
void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("Stack is full!!");
    }
    else
    {
        printf("Enter element to push : ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val; 
    }
}
    
void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1; 
    } 
}

void display()
{ 
    int i;
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;--i)
            printf("%dth elemen : %d\n",i+1,stack[i]); 
    }
}
