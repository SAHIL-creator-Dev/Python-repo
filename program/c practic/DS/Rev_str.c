#include <stdio.h>  
#include <string.h>  
  
#define max 100  
int top,stack[max];  
  
void push(char x){  
      if(top == max-1){  
          printf("stack overflow");  
      }  else { 
          stack[++top]=x;  
      }  
  
}  
  
void pop(){  
      printf("%c",stack[top--]);  
}  
 
main()  
{  
   char str[20];
   printf("Enter string : ");
   scanf("%s",str);  
   printf("before reverse : %s\n",&str);
   int len = strlen(str);  
   int i;  
  
   for(i=0;i<len;i++)  
        push(str[i]);  
  
  printf("After reverse : ");
   for(i=0;i<len;i++)  
      pop();  
}