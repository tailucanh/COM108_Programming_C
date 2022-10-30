#include <stdio.h>

int main(){
	int muc_luong = 8000000;
	int so_ngay_cong;
	float mot_ngay_cong, Tongtien;
	
	printf("Nhap so ngay cong: ");
	scanf("%d", &so_ngay_cong);
	
	mot_ngay_cong = 8000000 / 26.0;
	Tongtien = mot_ngay_cong * so_ngay_cong;
	
	printf("Tong tien nhan duoc sau %d ngay cong la: %.0f dong.", so_ngay_cong, Tongtien);
	
	return 0;
}
