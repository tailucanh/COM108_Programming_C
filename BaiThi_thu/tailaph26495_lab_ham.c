#include <stdio.h>

void menuChon(){
	printf( "        <------------Cho MENU------------>\n");
	printf("=====================================================\n");
	printf("= 1.Thong tin .\n");
	printf("= 2.Hinh chu nhat.\n");
	printf("= 3. Thoat.\n");
	printf("+-----------------------------------------------------+\n");
}


void thongTinSv(){
	printf("+-----THONG TIN SINH VIEN-----+\n");
	printf(" Ho va ten: Luc Anh Tai.\n");
	printf(" MSSV: PH26495.\n");
	printf(" Lop: CP17317.\n");
	
}


float HinhChuNhat(float a, float b, char phepTinh){
	float ketQua;
	if(phepTinh == 's'){
		ketQua = a*b;
	}else if(phepTinh == 'p'){
		ketQua = 2*(a + b);
	}
	return ketQua;
}


int main(){
	int menu;
	do{
		menuChon();
		printf(" Hay chon menu: ");
		fflush(stdin);
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				thongTinSv();
				
				printf("\n+---------------------------------------------+\n");
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
				
			float x,y;	
			case 2:
				printf("\n+-----HINH CHU NHAT-----+\n");
				printf(" Nhap chieu dai: ");
				scanf("%f",&x);
				printf(" Nhap chieu rong: ");
				scanf("%f",&y);
				printf("--> DIEN TICH HCN S = %.1f.\n",HinhChuNhat(x,y,'s'));
				printf("--> CHU VI HCN P = %.1f.\n",HinhChuNhat(x,y,'p'));
				
				
				printf("\n+---------------------------------------------+\n");
				printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
				getch();
				system("cls");
				break;
			case 3:
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
