#include <stdio.h>

int main(){
	float chieu_cao, can_nang;
	float BMI;
	
	printf("Nhap chieu cao cua ban(m): ");
	scanf("%f", &chieu_cao);
	printf("Nhap can nang cua ban(kg): ");
	scanf("%f", &can_nang);
	
	BMI = can_nang / (chieu_cao *2);
	
	printf("Chi so BMI cua ban la: %.1f", BMI);
	return 0;
}
