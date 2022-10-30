#include <stdio.h>

double tinh_tienDien(float soDien){
	float soTien;
	if(soDien > 0 && soDien <= 50){
		soTien = soDien*1678;
	}else if(soDien > 50 && soDien <= 100){
		soTien = 50*1678 + soDien*1734;
	}else if(soDien > 100 && soDien <= 200){
		soTien = 50*1678 + 50*1734 + soDien*2014;
	}else if(soDien > 200 && soDien <= 300){
		soTien = 50*1678 + 50*1734 + 100*2014 + soDien*2536;
	}else if(soDien > 300 && soDien <= 400){
		soTien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + soDien*2834;
	}else if(soDien > 400 ){
		soTien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + soDien*2927;
	}else{
		printf("Ban hay nhap dung so dien.\n");
	}
	
	return soTien;
}
		

int main(){
	float x;
	printf("Nhap so dien: ");
	scanf("%f", &x);
	
	printf("So tien dien can tra la: %.0f dong.", tinh_tienDien(x));
	
	
	return 0;
}
