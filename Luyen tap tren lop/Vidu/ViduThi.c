#include <stdio.h>

void thongtin(char datNuoc[],char thanhPho[],char duong[],int sonha){
	printf(" Dat nuoc: %s\n",datNuoc);
	printf(" Thanh pho: %s\n",thanhPho);
	printf(" Duong: %s\n",duong);
	printf(" So nha: %d\n",sonha);
}

void xeploai(int tuoi){
	if(tuoi<18){
		printf("Tuoi tre\n");
	}else if(tuoi>=18 && tuoi<=55){
		printf(" trung nien\n");
	}else{
		printf(" Tuoi gia\n");
	}
	
}


float demSoLuong(int soLuong, float canNang[]){
	int i;
	float count = 0;
	for ( i = 0; i< soLuong;i++){
		if(canNang[i] > 30){
			count++;
		}
	}
	return count;
	
}

int  viTriMin(int soLuong, float canNang[]){
	int i,vitri;
	int min = canNang[0];
	for(i = 0; i< soLuong;i++){
		if(canNang[i] < min){
			min = canNang[i];
			vitri = i+1;
		}
	}
	return vitri;
}



int main(){
	int menu;
	do{
		printf(" -----------------MENU-----------------\n");
		printf("\t1.thong tin ca nhan.\n");
		printf("\t2.Xeep loai nhan vien.\n");
		printf("\t3.Thong tin vat nuoi.\n");
		printf("\t0.Thoat.\n");
		printf("--------------------------------------------\n");
		printf(" chon menu: ");
		fflush(stdin);
		scanf("%d",&menu);
		printf("\n--------------------------------------------\n");
		
		switch(menu){
			
			char datNuoc[20];
			char thanhPho[30];
			char duong[30];
			int sonha;
			case 1: 
				printf("Nhap dat nuoc: ");
				fflush(stdin);
				gets(datNuoc);
				printf("Nhap thanh pho: ");
				fflush(stdin);
				gets(thanhPho);
				printf("Nhap duong: ");
				fflush(stdin);
				gets(duong);
				printf("Nhap so nha: ");
				scanf("%d",&sonha);
				
				thongtin(datNuoc,thanhPho,duong,sonha);
				
				printf("\nDa hoan thanh chuc nag,bam enter tiep tuc...\n");
				getch();
				system("cls");
				break;
				
				
			int tuoi;	
			case 2: 
				printf("Nhap tuoi cua ban: ");
				scanf("%d",&tuoi);
				xeploai(tuoi);
				
				printf("\nDa hoan thanh chuc nag,bam enter tiep tuc...\n");
				getch();
				system("cls");
				break;
				
			int soLuong,i;
			float canNang[20];	
			case 3: 
				printf("+-----------Thong tin vat nuoi-------------+\n");
				printf("\tNhap so luong vat nuoi: ");
				scanf("%d",&soLuong);
				printf("\tNhap can nang tung con: \n");
				for(i = 0;i<soLuong;i++ ){
					printf("\t    vat nuoi[%d] : ",i+1);
					scanf("%f",&canNang[i]);
				}
				printf("\n+----------Xuat thong tin vat nuoi------------+\n");
				printf("\tTong so vat nuoi la: %d con.\n",soLuong);
				printf("\tSo luong tren 30kg la: %.1f\n",demSoLuong(soLuong,canNang));
				printf("\t Con vat co can nang be nhat la con vat %d",viTriMin(soLuong,canNang));
				
				
				printf("\nDa hoan thanh chuc nag,bam enter tiep tuc...\n");
				getch();
				system("cls");
				break;
			case 0: 
				return 0;
			default:
				system("cls");
				printf("\nBan chon sai menu,bam enter chon lai...\n");
				getch();
				break;
		}
	}while(1);

	return 0;
}
