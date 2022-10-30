#include <stdio.h>

int main(){
	float a;
	
	printf("Nhap diem cua ban:");
	scanf("%f", &a);
	
	if(a < 0 || a > 10){
		printf("Hay nhap diem trong khoang 1-10.");
	}else if(a >= 9){
		printf("Ban co hoc luc suat sac.");
	}else if(a >= 8 && a < 9){
		printf("Ban co hoc luc gioi.");
	}else if(a >= 6.5 && a < 8){
		printf("Ban co hoc luc kha.");
	}else if(a >= 5 && a < 6.5){
		printf("Ban co hoc luc trung binh.");
	}else if(a >= 3.5 && a < 5){
		printf("Ban co hoc luc yeu.");
	}else{
		printf("Ban co hoc luc kem.");	
	}
	
	
    return 0;
	
}
