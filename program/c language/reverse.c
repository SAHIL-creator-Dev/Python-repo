#include<stdio.h> 
#include<string.h> 
int main(int argc, char *argv[]) { 
char temp; 
char *str; 
int i, j; 
/* Make sure correct command line arguments are passed */ 
if(argc!=2){ 
printf("Invalid Usage.\n"); 
printf("Usage Example: ./a.out string_to_reverse"); 
return 1; 
} 
str = argv[1]; // 2nd argument will the string to be reversed 
i = 0; // Initialize i at start  
j = strlen(str) - 1; // Initialize j with end of string length 
/* Swap characters from start and end */ 
while (i < j) { 
temp = str[i]; 
str[i] = str[j]; 
str[j] = temp; 
i++; 
j--; 
} 
// Print reversed string  
printf("reversed string is %s", str); 
return 0; 
}