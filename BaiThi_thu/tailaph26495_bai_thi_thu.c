#include <stdio.h>

void output(char name[], char mssv[], float diem1){
	printf(" +-----THONG TIN CA NHAN------+ \n");
	printf("\n\tHo va ten: %s\n", name);
	printf("\tMSSV: %s\n", mssv);
	printf("\tDiem: %.1f\n", diem1);
	
	
}


int tinhTong(int x){
	int i;
	int sum = 0;
	for (i = 0; i<= x; i++){
		sum += i;
	}
	return sum;
}

void kiemTra(int x){
	if( x % 2 == 0){
		printf(" --> %d la so chan.\n",x);
	}else {
		printf(" --> %d la so le.\n",x);
	}
}



float diemTB(int n,float diem[n]){
	float tong = 0, tb;
	int i;
	for(i = 0; i< n;i++){
		tong += diem[i];
	}
	tb = tong / n;
	return tb;
}

float diemMax(int n, float diem[n]){
	int i;
	float max = diem[0];
	for (i = 0; i < n; i++){
		if(diem[i] > max){
			max = diem[i];
		}
	}
	return max;
}

void xapxepds(int n, float diem[n]){
	int i,j;
	for (i = 0; i < n;i++){
		for (j = i+1; j < n;j++){
			if(diem[i] < diem[j]){
				float temp = diem[i];
				diem[i] = diem[j];
				diem[j] = temp;
			}
		}
	}
	printf("\t- Xap xep danh sach diem theo thu tu tu trai sang phai: ");
	for ( i = 0; i< n; i++){
		printf("  %.2f ", diem[i]);
	}
}




int main(){
	int menu;
	do{
		printf("  +--------------------------Menu------------------------+\n");
		printf("\t1. Thong tin ca nhan.\n");
		printf("\t2. Tinh tong tu 1 den N.\n");
		printf("\t3. Thong tin sinh vien.\n");
		printf("\t0. Thoat.\n");
		printf("\n+--------------------------------------------------------+\n");
		printf("   Chon menu: ");
		fflush(stdin);
		scanf("%d", &menu);
		printf("\n+--------------------------------------------------------+\n");
		
		switch(menu){
			
			char name[50];
			char mssv[30];
			float diem1;
			case 1: 
				printf("  - Nhap ten: ");
				fflush(stdin);
				gets(name);
				printf("  - MSSV: ");
				fflush(stdin);
				gets(mssv);
				printf("  - Diem: ");
				scanf("%f", &diem1);
				output(name,mssv,diem1);
			
			
				printf("\n+---------------------------------------------+\n");
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
			int x;	
			case 2: 
				do{
					printf("  Nhap N > 0: ");
					scanf("%d", &x);
				}while(x <= 0);
				kiemTra(x);
				printf(" --> Tong tu 1 --> %d la S =  %d\n",x, tinhTong(x));
			
				printf("\n+---------------------------------------------+\n");
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
				
			int n;
			int i, j;
			float diem[30];
			case 3:
				printf("\n   +-------- THONG TIN SINH VIEN -------+\n");
				printf("      - Nhap so luong sinh vien: ");
				scanf("%d", &n);
				printf("      - Nhap so diem cua tung sinh vien: \n");
				for (i = 0; i< n; i++){
					printf("\t     DiemSv[%d] = ",i+1);
					scanf("%f", &diem[i]);
			  	}
			  
			  	printf("\n   +------XUAT THONG TIN SINH VIEN------+\n");
			  	printf("\n\t- So luong sinh vien la: %d.\n", n);
			  	printf("\t- Diem trung binh chung: %.2f diem.\n", diemTB(n,diem));
				printf("\t- Diem Max: %.1f diem.\n", diemMax(n,diem));
				xapxepds(n,diem);
						 	
				
				printf("\n+---------------------------------------------+\n");
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
			case 0:
				return 0;
				
			default:
				system("cls");		
				printf("Ban da nhap sai, bam ENTER de nhap lai.\n");
				getch();
				break;									
		}
		
	}while(1);


	return 0;
}
