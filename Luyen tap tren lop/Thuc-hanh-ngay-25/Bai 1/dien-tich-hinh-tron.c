#include <stdio.h>


int main(){
	
	const float PI = 3.14;
	float R, C, S;
	
	printf("Nhap gia tri R = ");
	scanf("%f", &R);
	
	C = 2 * R * PI;
	S = PI * R *R;
	
	printf("Chu vi hinh tron = %.2f\n", C);
	printf("Dien tich hinh tron = %.2f", S);
	
			
	return 0;
}
