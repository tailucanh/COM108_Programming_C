#include <stdio.h>
#include <math.h>
int main(){
	int menu, phuong_trinh;
	float a, b, c, x, X1, X2, delta, n, so_tien;
	
	printf("Cho menu sau: \n   1.Tinh hoc luc cua ban.\n   2.Giai phuong trinh.\n   3.Tinh tien dien.\n");
	printf("Hay chon mot menu: ");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
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
			}return 0;
		case 2:
			printf("Chon loai phuong trinh muon giai?\n   1.Phuong trinh bac 1.\n   2.Phuong trinh bac 2.\n" );
			printf("Moi ban chon phuong trinh : ");
			scanf("%d", &phuong_trinh);
			
			switch(phuong_trinh){
				case 1:		
					printf("Nhap so a:");
					scanf("%f", &a);
					printf("Nhap so b:");
					scanf("%f", &b);
					if(a != 0){
						x = - (b / a);
						printf("X = %.1f", x);
					}else if(a == 0, b != 0){
						printf("Phuong trinh vo nghiem.");
					}else{
						printf("Phuong trinh co vo so nghiem.");
					}return 0;
				case 2:
					printf("Nhap so a:");
					scanf("%f", &a);
					printf("Nhap so b:");
					scanf("%f", &b);
					printf("Nhap so c:");
					scanf("%f", &c);
					
					if(a == 0){
						if(b == 0 && c == 0){
							printf("Phuong trinh VO DINH.");
						}else if(b == 0 && c != 0){
							printf("Phuong trinh VO NGHIEM.");
						}else{
							x = - b/c;
							printf("Phuong trinh co nghiem x = %.1f", x);
						}
					}else if(a != 0){
						delta = b*b-4*a*c;
						if(delta < 0){
							printf("Phuong trinh VO NGHIEM.");
						}else if(delta == 0){
							x = -b/(2*a);
							printf("Phuong trinh co NGHIEM KEP x = %.1f", x);
						}else{
							X1 = -(b + sqrt(delta))/(2*a);
							X2 = -(b - sqrt(delta))/(2*a);
							printf("Phuong trinh co hai nghiem:\n --->X1 = %.1f.\n --->X2 = %.1f.", X1, X2);
						}
						}return 0;				
				default:
					printf("Ban da nhap sai, hay chon dung phuong trinh.");
				return 0;
			}
		case 3: 
			printf("Nhap so dien tieu thu hang thang(kWh): ");
			scanf("%f", &n);
			
			if(n <= 0){
				printf("Hay nhap so dien > 0.");
			}else if(n > 0 && n <= 50){
				so_tien = n * 1.678;
				printf("So tien dien cua ban la: %.1f nghin dong.", so_tien);
			}else if(n > 51 && n <= 100){
				so_tien = n * 1.734;
				printf("So tien dien cua ban la: %.1fnghin dong.", so_tien);
			}else if(n > 101 && n <= 200){
				so_tien = n * 2.014;
				printf("So tien dien cua ban la: %.1fnghin dong.", so_tien);
			}else if(n > 201 && n <= 300){
				so_tien = n * 2.536;
				printf("So tien dien cua ban la: %.1fnghin dong.", so_tien);
			}else if(n > 301 && n <= 400){
				so_tien = n * 2.834;
				printf("So tien dien cua ban la: %.1fnghin dong.", so_tien);
			}else if(n > 400 ){
				so_tien = n * 2.927;
				printf("So tien dien cua ban la: %.1fnghin dong.", so_tien);
			}
			
			return 0;
		default:
			printf("Ban da nhap sai menu, yeu cau nhap lai.");
	}
		
			
	
	
	return 0;
}
