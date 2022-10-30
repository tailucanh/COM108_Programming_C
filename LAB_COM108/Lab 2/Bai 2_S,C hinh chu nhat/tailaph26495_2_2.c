#include <stdio.h>

int main(){
	int a, b, S, P;

	printf("Nhap chieu dai: ");
	scanf("%d", &a);
	
	printf("Nhap chieu rong: ");
	scanf("%d", &b);
	
	P = (a + b) / 2;
	S = a * b;
	
	printf("Chu vi = %d\n", P);
	printf("Dien tich = %d", S);
	
	
    return 0;
}
