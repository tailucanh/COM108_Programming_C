#include <stdio.h>
#include <math.h>
	
		
void thongtin(){
	printf(" \n   *-______________ASSIGNMENT - COM108_________________-*  \n");
	printf("\n        Ho va ten: Luc Anh Tai.\n");
	printf("        MSSV: PH26495.\n");
	printf("        Lop: CP17317.\n");
}	
			
//-----------------------------------------------------------//		
		
		    	//Kiem tra so nguyen.

void kiem_tra_so_nguyen(float n){
	int i;
	
	if(n == (int)n){
		printf("    ---> %.1f la so nguyen.\n", n);
	}else{
		printf("    ---> %.1f khong la so nguyen.\n", n);
	}
	
	
	if (n > 1 && n == (int)n){
		int i, sodu = 1;
		for (i = 2; i < (int)n; i++){
			if ((int)n % i == 0){
				sodu = 0;
				break;
			}
		}		
		if(sodu == 1){
			printf("    ---> %.1f la so nguyen to.\n", n);
		}else{
			printf("    ---> %.1f khong phai la so nguyen to\n", n);
		}	
	}else{
		printf("    ---> %.1f khong phai la so nguyen to.\n", n);
	}
	
	if(n > 0 && n == (int)n){
		for(i= 0;i <= n;i++){
			if(i*i == n){
				printf("    ---> %.1f la so chinh phuong.\n", n);
				break;
			}
		}
		if (i*i != n){
			printf("    ---> %.1f khong la so chinh phuong.\n", n);
		}
	}else{
		printf("    ---> %.1f khong la so chinh phuong.\n", n);
	}
	
}
//-----------------------------------------------------------//
					
				// UCLN va BCNN.

int ucln(int a, int b){
	int  i, result;
	int min = a;
	
	if (min > b){
		min = b;
	}
	for(i = min; i >= 1; i--){
		if(a % i == 0 && b % i == 0){
			result = i;
			break;
		}
	}
	return result;
}
int bcnn(int a, int b){
	int i,result;
	int max = a;
	
	if(b > max){
		max = b;
	}
	for(i = max; i <= (a*b); i++){
		if(i % a == 0 && i % b == 0){
			result = i;
			break;
		}
	}
	
	return result;
}
//-----------------------------------------------------------//

				// Tinh tien karaoke.

double tinh_tien_karaoke(int start, int finish){
	int soGio = finish - start;
	float tongTien = 0;
	
	if(soGio <= 3){
		tongTien = soGio*150000;
	}else{
		tongTien = soGio*150000 + ((soGio - 3)*150000 - 150000*0.3);
	}
	
	if(start >= 14 && start <= 17){
		tongTien = tongTien - (tongTien*0.1);
	}
	
	return tongTien;
}
//-----------------------------------------------------------//
				
				// Tinh tien dien.	

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
		printf("   ---> Ban hay nhap so dien > 0.\n");
	}
	
	return soTien;
}
//-----------------------------------------------------------//

				//xap xep tt sinh vien.

struct sinhVien{
	float diem;
	char name[50];
};

char *xepLoai(float diem){
	char *th;
	if(diem >= 9){
		th = "Xuat xac";
	}else if(diem >= 8){
		th = "Gioi";
	}else if(diem >= 6.5){
		th = "Kha";
	}else if( diem >= 5){
		th = "Trung binh";
	}else{
		th = "Yeu";
	}
	return th;
} 

void sapXepDs(struct sinhVien ds[], int soLuong){
	int i,j;
	for (i = 0; i< soLuong - 1; i++){
		for (j = i+1; j < soLuong; j++){
			if(ds[i].diem < ds[j].diem){
				struct sinhVien temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}

void input(struct sinhVien ds[], int * soLuong){
	printf("    Nhap so luong sinh vien: ");
	scanf("%d", soLuong);
	int i;
	for(i = 0; i< *soLuong;i++){
		fflush(stdin);
		printf("     Sinh vien %d. \n", i+1);
		printf("     - Ho ten: ");
		gets(ds[i].name);
		printf("     - Diem trung binh: ");
		scanf("%f", &ds[i].diem);
	}
}

void output(struct sinhVien ds[], int  soLuong){
	printf("\n\t  +------DANH SACH SINH VIEN-------+\n");
	printf("\n    STT\t    Ho ten\t Diem trung binh\tHoc luc\t\n");
	int i;
	for(i = 0;i < soLuong;i++){
		printf("     %d\t  %s\t\t%.1f\t\t%s\n", i+1, ds[i].name, ds[i].diem, xepLoai(ds[i].diem));
	}
	
}
//-----------------------------------------------------------//
	
				// Tinh toan phan so.

struct PhanSo {
	int tu;
	int mau;
};

struct PhanSo nhap(){
	struct PhanSo p;
	printf("    - Nhap tu so: ");
	scanf("%d", &p.tu);
	while(1) {
		printf("    - Nhap mau so: ");
		scanf("%d", &p.mau);
		if(p.mau != 0) {
			break;
		}
	}
	return p;
}

int UCLN(int a, int b) {
	int  i, result;
	int min = a;
	
	if (min > b){
		min = b;
	}
	for(i = min; i >= 1; i--){
		if(a % i == 0 && b % i == 0){
			result = i;
			break;
		}
	}
	return result;
}

struct PhanSo rutGon(struct PhanSo p) {
	if(p.tu != 0) {
		int u = UCLN(p.tu, p.mau);
		p.tu /= u;
		p.mau /= u;
	}
	return p;
}

int BCNN(int a, int b) {
	int u = ucln(a, b);
	return a * b / u;
}

struct PhanSo cong(struct PhanSo a, struct PhanSo b) {
	struct PhanSo tong;
	tong.mau = BCNN(a.mau, b.mau);
	tong.tu = tong.mau / a.mau * a.tu + b.tu * tong.mau / b.mau;
	tong = rutGon(tong);
	return tong;
}

struct PhanSo tru(struct PhanSo a, struct PhanSo b) {
	struct PhanSo hieu;
	hieu.mau = BCNN(a.mau, b.mau);
	hieu.tu = hieu.mau / a.mau * a.tu - b.tu * hieu.mau / b.mau;
	hieu = rutGon(hieu);
	return hieu;
}

struct PhanSo nhan(struct PhanSo a, struct PhanSo b) {
	struct PhanSo tich;
	tich.tu = a.tu * b.tu;
	tich.mau = a.mau * b.mau;
	tich = rutGon(tich);
	return tich;
}

struct PhanSo chia(struct PhanSo a, struct PhanSo b) {
	struct PhanSo kq;
	kq.tu = a.tu * b.mau;
	kq.mau = a.mau * b.tu;
	kq = rutGon(kq);
	return kq;
}
//-----------------------------------------------------------//



int main(){
	thongtin();
	int menu;
	do{			
		printf( " \n   <-----------------------MENU------------------------->\n");
		printf("   |    1. Kiem tra so nguyen.                          |\n");
		printf("   |    2. Tim UCLN va BCNN cua 2 so.                   |\n");
		printf("   |    3. Chuong trinh tinh tien cho quan Karaoke.     |\n");
		printf("   |    4. Tinh tien dien.      	                |\n");
		printf("   |    5. Sap xep thong tin sinh vien.                 |\n");
		printf("   |    6. Xay dung chuong trinh tinh toan phan so.     |\n");
		printf("   <---------------------------------------------------->\n");
		
		printf("    Moi ban chon menu: ");
		fflush(stdin);
		scanf("%d", &menu);
		printf("   ------------------------------------------------------\n");
		
		float n;
		switch(menu){
			case 1:
						//Kiem tra so nguyen.
				
				printf("   Nhap vao so nguyen n: ");
				scanf("%f", &n);
				kiem_tra_so_nguyen(n);
				
				printf("\n  +------------------------------------------------------+\n");
				printf("\n    Hoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
			
			int a, b;
			case 2:
						//.UCLN va BCNN.
						
				printf("     - Nhap so x: ");
				scanf("%d", &a);
				printf("     - Nhap so y: ");
				scanf("%d", &b);
			
				printf("    -->UCLN cua %d va %d la: %d\n", a, b, ucln(a,b));
				printf("    -->BCNN cua %d va %d la: %d", a, b, bcnn(a,b));
				
				printf("\n  +------------------------------------------------------+\n");
				printf("\n    Hoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
			int x, y;	
			int dieuKien = 0;
			case 3:
						// Tinh tien karaoke.
				do{		
					printf("     - Nhap gio bat dau: ");
					scanf("%d", &x);
					printf("     - Nhap gio ket thuc: ");
					scanf("%d", &y);
					
					dieuKien = (x > y || x < 12 || x > 23 || y < 12 || y > 32);
					if(dieuKien != 0){
						printf("    --> Gio hoat dong cua quan tu 12h-->23h.\n");
						printf("      Ban hay nhap lai.\n");
					}
				}while(dieuKien != 0);
	
				printf("     --> So tien phai tra: %.0f dong", tinh_tien_karaoke(x,y));
				
				printf("\n  +------------------------------------------------------+\n");
				printf("\n    Hoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
			float t;
			case 4:
						// Tinh tien dien.
				printf("     - Nhap so dien: ");
				scanf("%f", &t);
				
				printf("     --> So tien dien can tra la: %.0f dong.", tinh_tienDien(t));
				
				printf("\n  +------------------------------------------------------+\n");
				printf("\n    Hoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
			struct sinhVien ds[30];
			int soLuong;
			case 5:
						//xap xep tt sinh vien.
				input(ds,&soLuong);
				sapXepDs(ds,soLuong);
				output(ds,soLuong);
				
				printf("\n  +------------------------------------------------------+\n");
				printf("\n   Hoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
			case 6:
						// Tinh toan phan so.
				printf("    --> Nhap phan so thu nhat: \n");
				struct PhanSo p = nhap();
				printf("    --> Nhap phan so thu hai: \n");
				struct PhanSo q = nhap();
				printf("    ---> Phan so 1 = %.d/%.d\n",p.tu,p.mau);
				printf("    ---> Phan so 2 = %.d/%.d\n",q.tu,q.mau);
				
				printf("\n   +---------TINH TOAN----------+\n");
				struct PhanSo tong = cong(p, q);
				struct PhanSo hieu = tru(p, q);
				struct PhanSo tich = nhan(p, q);
				struct PhanSo thuong = chia(p, q);
				
				printf("   \t%d/%d + %d/%d = %d/%d\n", 
					p.tu, p.mau, q.tu, q.mau, tong.tu, tong.mau);
					
				printf("   \t%d/%d - %d/%d = %d/%d\n", 
					p.tu, p.mau, q.tu, q.mau, hieu.tu, hieu.mau);
				
				printf("   \t%d/%d * %d/%d = %d/%d\n", 
					p.tu, p.mau, q.tu, q.mau, tich.tu, tich.mau);
					
				printf("   \t%d/%d / %d/%d = %d/%d\n", 
					p.tu, p.mau, q.tu, q.mau, thuong.tu, thuong.mau);
					
				printf("\n  +------------------------------------------------------+\n");
				printf("\n   Hoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
			default:
				system("cls");		
				printf("   Ban da nhap sai menu, bam ENTER de nhap lai.\n");
				getch();
				break;
		}
	}while(1);
	
	
	return 0;	
}
