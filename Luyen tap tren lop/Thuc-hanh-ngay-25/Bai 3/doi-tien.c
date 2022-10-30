#include <stdio.h> 

int main(){
	
	int so_tien_nhap;
	printf("Nhap so tien la boi so cua 10: ");
	scanf("%d", &so_tien_nhap);
	
	int so_to_tien_500k = 0, so_to_tien_200k = 0, so_to_tien_100k = 0, so_to_tien_50k = 0, so_to_tien_20k = 0, so_to_tien_10k = 0;
	
	so_to_tien_500k = so_tien_nhap / 500000;
	so_tien_nhap = so_tien_nhap % 500000;
	printf("So to 500k la %d to\n", so_to_tien_500k);
	

	so_to_tien_200k = so_tien_nhap / 200000;
	so_tien_nhap = so_tien_nhap % 200000;

	printf("So to 200k la %d to\n", so_to_tien_200k);
		
	so_to_tien_100k = so_tien_nhap / 100000;
	so_tien_nhap = so_tien_nhap % 100000;
	printf("So to 100k la %d to\n", so_to_tien_100k);
	
	so_to_tien_50k = so_tien_nhap / 50000;
	so_tien_nhap = so_tien_nhap % 50000;
	printf("So to 50k la %d to\n", so_to_tien_50k);
	
	so_to_tien_20k = so_tien_nhap / 20000;
	so_tien_nhap = so_tien_nhap % 20000;
	printf("So to 20k la %d to\n", so_to_tien_20k);
	
	so_to_tien_10k = so_tien_nhap / 10000;
	so_tien_nhap = so_tien_nhap % 10000;
	printf("So to 10k la %d to", so_to_tien_10k);
	

	
	
	return 0;
}
