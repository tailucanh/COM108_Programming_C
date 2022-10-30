#include <stdio.h>

int bai2(int namKn){
	int tienthuong;
	
	if(namKn > 0 && namKn <= 5){
		tienthuong = 5000000;
	}else if( namKn <= 10){
		tienthuong = 1000000;
	}else{
		tienthuong = 2000000;
	}
	return tienthuong;
}
int main(){
	printf("------BAi 2-------\n");
	int input;
	printf("Nhap so nam kinh nghiem: ");
	scanf("%d", &input);
	printf("Tien thuong cua ban la: %d dong.", bai2(input));

	return 0;
}
