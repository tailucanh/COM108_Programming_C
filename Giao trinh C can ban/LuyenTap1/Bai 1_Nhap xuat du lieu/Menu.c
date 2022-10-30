#include <stdio.h>
#include <math.h>
int main(){
	int menu;
	const float PI = 3.14;
	do{	
		printf("\t-------------Cho Menu--------------\n");
		printf(" 1.Chuong trinh doi mot so nguyen he 10 sang he 2.\n ");
		printf("2.Chuong trinh doi mot so nguyen he 10 sang he 16.\n ");
		printf("3.Chuong trinh doc vao 2 so nguyen và in ra ket qua cua (+),(-),(*),(/).\n");
		printf(" 4.Ban kinh hinh cau, tinh và in ra dien tich, the tich cua hinh cau.\n");
		printf(" 5.Chuong trinh nhap vào so a và in ra gia tri binh phuong ,lap phuong và gia tri a^4.\n");
		printf(" 6.Chuong trinh doc tu bàn phim 3 so nguyen bieu dien ngay, thang, nam.\n");
		printf(" 7.Chuong trinh nhap vào so giay tu 0 den 86399, doi so giay thành dang gio:phut:giay.\n");
	
		printf("Enter menu: ");
		fflush(stdin);
		scanf("%d", &menu);
		
		switch(menu){
			int x;		
			case 1:
				do{
					printf("Nhap so nguyen bat ki(x > 0): ");
					scanf("%d", &x);		
				}while(x < 0);
				if (x == 0){
					printf("0\n");
				}else{
					//Dùng mang và chuoi					
				}		
				getch();
				system("cls");				
				break;
			case 2:
				//Dung mang va chuoi
				getch();
				system("cls");
				break;
				
			int a, b;	
			case 3:
				printf("Nhap so a: ");
				scanf("%d", &a);
				printf("Nhap so b: ");
				scanf("%d", &b);
				
				printf("A + B = %d\n", a+b);
				printf("A - B = %d\n", a-b);
				printf("A * B = %d\n", a*b);
				printf("A / B = %d\n", a/b); //khong lay phan thap phan
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
			float r, S, V;	
			case 4:
				printf("Nhap ban kinh r = ");
				scanf("%f", &r);
				 
				S = 4 * PI * r * r;
				V = (4/3) * PI * r * r * r;
				
				printf("---> S =  %.2f\n", S);
				printf("---> V = %.2f\n", V);
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
			float n;		
			case 5:
				printf("Nhap so n: ");
				scanf("%f", &n);
				
				printf("-->Binh phuong cua %.2f la: %.2f\n", n, pow(2,n));
				printf("-->Lap phuong cua %.2f la: %.2f\n", n, pow(3,n));
				printf("-->%.2f mu 4 =  %.2f\n", n, pow(4,n));
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
			int ngay, thang, nam;	
			case 6:
				printf("Nhap ngay: ");
				scanf("%d", &ngay);	
				printf("Nhap thang: ");
				scanf("%d", &thang);	
				printf("Nhap nam: ");
				scanf("%d", &nam);		
				
				if(ngay > 1 && ngay < 31){
					if(thang > 1 && thang < 12){
						nam %= 100;
						printf("Hom nay la %02d/%02d/%02d.\n", ngay, thang, nam);	
					}
				}
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
			
			long giay;	
			long h, p, s;
			case 7:
				printf("Nhap vao so giay(0-->86399): ");
				scanf("%ld", &giay);
				
				h = giay / 3600;
				p = (giay - h*3600)/60;
				s = giay - h*3600 - p*60;
				
				printf("--->%02ld:%02ld:%02ld.\n", h, p, s);
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();	
				system("cls");
				break;
				
			default:
				system("cls");
				printf("Ban da nhap sai, bam enter chon lai. \n");
				getch();	
				break;
				
		}
	}while(1);

	return 0;
}
