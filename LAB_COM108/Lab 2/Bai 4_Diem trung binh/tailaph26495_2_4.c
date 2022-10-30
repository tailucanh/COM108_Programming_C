#include <stdio.h>

int main(){
	float a, b, c;
	float Trungbinh;
	
	printf("Nhap diem Toan: ");
	scanf("%f", &a);
	
	printf("Nhap diem Ly: ");
	scanf("%f", &b);
	
	printf("Nhap diem Hoa: ");
	scanf("%f", &c);
	
	Trungbinh = ((a * 3) + (b *2) + c) / 6;
	printf("Diem trung binh = %.2f", Trungbinh);
	
	return 0;
	
	
	
}

