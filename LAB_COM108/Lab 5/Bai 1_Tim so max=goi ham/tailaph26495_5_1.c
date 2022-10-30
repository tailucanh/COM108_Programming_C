#include <stdio.h>

int maxNumber(int a, int b, int c){
	int max;
	max = a;
	if(b > max){
		max = b;
	}else if(c > max){
		max = c;
	}
	return max;
}

int main(){
	
	int a, b, c;
	
	printf("Enter number a: ");
	scanf("%d", &a);
	printf("Enter number b: ");
	scanf("%d", &b);
	printf("Enter number c: ");
	scanf("%d", &c);
	
	printf("Max number is: %d", maxNumber(a,b,c));


	return 0;
}
