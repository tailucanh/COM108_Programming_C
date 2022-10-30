#include <stdio.h>

void xepLoai( float diem){
	if(diem >= 8){
		printf("Gioi");
	}else if(diem >= 7){
		printf("Kha");
	}else if(diem >= 5){
		printf("Trug binh");
	}else{
		printf("Yeu");
	}
}


int main(){
	int n;
	int i, j;
	float diem[n];
	printf("  Nhap so luong sinh vien: ");
	scanf("%d", &n);
	printf("Nhap so diem cua tung sinh vien: \n");
	for (i = 0; i< n; i++){
		printf("  DiemSv[%d] = ",i+1);
		scanf("%f", &diem[i]);
  	}
	
	
  	printf("\n+------Ket qua xep loai------+\n");
	for(i = 0; i<n; i++){
		printf("\n SV %d - %.1f - ", i, diem[i]);
		xepLoai(diem[i]);
	}

	
	
	return 0;
}
