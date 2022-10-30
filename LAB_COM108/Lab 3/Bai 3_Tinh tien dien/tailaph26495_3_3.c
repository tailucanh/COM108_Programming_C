#include <stdio.h>

int main(){
	
	float n, so_tien;
	
	printf("Nhap so dien tieu thu hang thang(kWh):");
	scanf("%f", &n);
	
	if(n <= 0){
		printf("Hay nhap so dien > 0:");
	}else if(n > 0 && n <= 50){
		so_tien = n * 1.678;
		printf("So tien dien cua ban la: %.1f nghin dong", so_tien);
	}else if(n > 51 && n <= 100){
		so_tien = n * 1.734;
		printf("So tien dien cua ban la: %.1fnghin dong", so_tien);
	}else if(n > 101 && n <= 200){
		so_tien = n * 2.014;
		printf("So tien dien cua ban la: %.1fnghin dong", so_tien);
	}else if(n > 201 && n <= 300){
		so_tien = n * 2.536;
		printf("So tien dien cua ban la: %.1fnghin dong", so_tien);
	}else if(n > 301 && n <= 400){
		so_tien = n * 2.834;
		printf("So tien dien cua ban la: %.1fnghin dong", so_tien);
	}else if(n > 400 ){
		so_tien = n * 2.927;
		printf("So tien dien cua ban la: %.1fnghin dong", so_tien);
	}
	
	return 0;
}
