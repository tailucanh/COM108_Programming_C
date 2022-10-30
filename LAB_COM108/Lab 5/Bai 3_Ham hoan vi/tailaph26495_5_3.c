#include <stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a, b;
	
	printf("Enter number a: ");
	scanf("%d", &a);
	printf("Enter number b: ");
	scanf("%d", &b);
	
	swap(&a, &b);
	printf("-->Number a after swap is: %d.\n", a);
	printf("-->Number b after swap is: %d.", b);
	
	
	return 0;
}
