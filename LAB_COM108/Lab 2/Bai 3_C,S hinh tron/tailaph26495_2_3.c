#include <stdio.h>


int main(){
	const float PI = 3.14;
	float r, P, S;
	
	printf("Nhap ban kinh: ");
	scanf("%f", &r);
	
	P = PI * r * 2;
	S = PI * r * r;
	
	printf("Chu vi hinh tron = %.2f\n", P);
	printf("Dien tich hinh tron = %.2f", S);
	
	
	return 0;
	
	
	
}
