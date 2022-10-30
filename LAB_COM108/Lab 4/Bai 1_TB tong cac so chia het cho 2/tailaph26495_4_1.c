#include <stdio.h>

int main() {
	int Min, Max;
	
	printf("Nhap so tu nhien Min:");
	scanf("%d", &Min);
	printf("Nhap so tu nhien Max:");
	scanf("%d", &Max);
	
	int i = Min;
	float tong = 0, soBien = 0, trungBinh;
	while (i <= Max){
		if (i % 2 == 0){
			tong += i;
			soBien++;
		
		}
		i++;
	}
	trungBinh = tong / soBien;
	printf("\nTrung binh tong cac so chia het cho 2 la: %f", trungBinh);
	
	
	return 0;
}

