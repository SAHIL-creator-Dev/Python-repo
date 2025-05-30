#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *p, *table;
 int size;
 printf("\nWhat is the size of table?\n");
 scanf("%d",&size);
 printf("\n");
 if((table = (int*)malloc(size *sizeof(int))) == 0)
 {
 printf("No space available \n");
 exit(1);
 }
 printf("\n Address of the first byte is %u \n", table);
 /* Reading table values*/
 printf("\nInput table values\n");
 for (p=table; p<table + size; p++)
 scanf("%d",p);
 /* Printing table values <span id="IL_AD3" class="IL_AD">in reverse</span> 
order*/
 for (p = table + size -1; p >= table; p --)
 printf("%d is stored at address %u \n",*p,p);
return 0;
}
