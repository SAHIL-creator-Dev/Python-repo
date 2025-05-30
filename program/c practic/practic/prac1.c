#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#define max 5
int stack[max], top =-1;
void displayChoice();
void displayElement();
// void exit();
void push()
{
    int val;
    if(top==max-1)
    {
        printf("Stack is full\n");
        displayChoice();
    }
    else{
        printf("Enter the element : ");
        scanf("%d",&val);
        top = top+1;
        stack[top] = val;
        printf("Element is successfilly push into the stack\n");
        displayChoice();
    }
}

void pop()
{
    
    if(top==-1)
    {
        printf("Stack is empty \n");
    }
    else{
        printf("deleted stack is %d",stack[top]);
        top = top-1;
        displayChoice();
    }
}

void displayElement()
{
    if(top==-1)
    {
        printf("Stack is empty/n");
        displayChoice();
    }
    else{
        for (int i = top; i >= 0; --i)
        {
            printf("Element %d : %d\n",i+1,stack[i]);
            displayChoice();
        }
    }
}
void displayChoice()
{
    int ch;
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        displayElement();
        break;
    case 4:
        exit(0);
        break;
    
    default:
        break;
    }
}
int main()
{
    // display choice
    displayChoice();
    return 0;
}