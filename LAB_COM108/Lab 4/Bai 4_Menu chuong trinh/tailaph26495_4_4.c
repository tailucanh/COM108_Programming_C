#include <stdio.h>

int main(){
	int menu;
	printf(" ---------------CHO MENU----------------\n");
	printf("  1.Tinh trung binh tong cac so tu nhien chia het cho 2.\n");
	printf("  2.Xac dinh so nguyen to.\n");
	printf("  3.Xac dinh so chinh phuong.\n");
	printf("  4.Thoat chuong trinh\n");
	do{
		printf("--->Hay chon menu (1,2,3,4): ");
		scanf("%d", &menu); 
	}while(menu < 1 || menu > 4);
		
	int Min, Max;
	switch(menu){
		case 1:
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
			printf("\nTrung binh tong cac so chia het cho 2 la: %.1f", trungBinh);
			break;
	int n;		
		case 2:
			printf("Nhap vao so nguyen N: ");
			scanf("%d", &n);
				
			if (n < 2){
				printf("%d khong phai la so nguyen to.", n);
			}else{
				int j, sodu = 1;
				for (j = 2;j < n; j++){
					if (n % j == 0){
						sodu = 0;
					}
				}
				if(sodu == 1){
					printf("%d la so nguyen to.", n);
				}else{
					printf("%d khong phai la so nguyen to.", n);
				}
			}
			break;	
				
	int x;			
		case 3:		
			printf("Nhap vao so nguyen X: ");
			scanf("%d", &x);
		 	int k;		
			for(k=1;k<x;k++){
				if(k*k == x){
					printf("--->%d la so chinh phuong.", x);
					break;
				}
			}
			if (k*k != x){
				printf("--->%d khong la so chinh phuong.", x);
			}
			break;
		default:
			return 0;		
	}
	return 0;
}
