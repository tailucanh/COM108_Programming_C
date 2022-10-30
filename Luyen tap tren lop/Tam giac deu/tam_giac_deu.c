#include <stdio.h>

int main(){
	int dong,i,j;
    printf("Nhap so dong:");
    scanf("%d", &dong);

   	for(i = 1; i <= dong; i++) {
      for(j = 1; j <= dong-i; j++)
         printf(" ");
 
      for(j = 1; j <= i; j++)
         printf("* ");
 
      printf("\n");
   }
	
	return 0;
}
