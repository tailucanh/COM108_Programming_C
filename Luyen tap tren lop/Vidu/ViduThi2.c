#include <stdio.h>

void thongTin(){
	char name1 [30],name2 [30];
	int age1, age2;
	
	printf("Nhap ten bo: ");
	fflush(stdin);
	gets(name1);	
	printf("Nhap tuoi cua bo: ");
	scanf("%d",&age1);
	
	printf("Nhap ten me: ");
	fflush(stdin);
	gets(name2);

	printf("Nhap tuoi cua me: ");
	scanf("%d",&age2);

	printf("---> Bo: %s - %d tuoi.\n", name1, age1);
	printf("---> Me: %s - %d tuoi.\n",name2,age2);
}


void lietKe(int n){
	int i;
	for(i = 0; i<=n; i++){
		if( i % 5 == 0 ){
			printf("  %d", i);
		
		}	
	}
}


int tong(int n){
	int i, sum = 0;
	for (i = 0; i<=n; i++){
		if(i % 5 == 0){
			sum += i;
		}
	}
	return sum;
}


void sinhVien(){
	int x, i;
	float diem[10];
	//Nhap thong tin
	printf("+------Thong tin sinh vien lap trinh-------+\n");
	printf(" Nhap so luong sinh vien: ");	
	scanf("%d",&x);
	for(i = 0;i < x;i++){
		printf(" Diem lap trinh [%d]= ", i+1);
		scanf("%f", &diem[i]);
	}
	
	//Xuat thong tin
	printf("\n+-----------Xuat thong tin sinh vien----------+\n");
	printf("--> Tong so : %d sinh vien.\n", x);
	
	//Xuat tong so sinh vien co diem >= 5
	int count = 0;
	for(i = 0; i< x; i++){
		if(diem[i] >= 5){
			count ++;
		}
	}
	printf("--> So luong sinh vien co diem >= 5 la: %d", count);
	
	//Sinh vien co diem cao nhat
	int max = diem[0];
	printf("\n--> Sinh vien co diem thi cao nhat la sinh vien: ");
	for(i = 0; i< x; i++){
		if(diem[i] > max){
			max = diem[i];
		}
	}
	for(i = 0; i< x; i++){
		if(diem[i] == max){
			printf(" %d", i + 1);
		}
	}		
}



int main(){
	int menu;
	do{
		printf("  +------------------CHO MENU---------------+\n");
		printf("\t  1.Thong tin gia dinh,\n");
		printf("\t  2.So chia het cho 5.\n");
		printf("\t  3.Thong tin sinh vien lap trinh.\n");
		printf("\t  0.Thoat.\n");
		printf("+---------------------------------------------+\n");
		printf("   Moi ban chon menu: ");
		fflush(stdin);
		scanf("%d", &menu);
		
		switch (menu){
			case 1:
				thongTin();
				
				printf("+---------------------------------------------+\n");
				printf("   Hoan thanh bai 1.Bam ENTER de tiep tuc...\n");
				getch();
				system("cls");
				break;
			
			int n;
			case 2:
				do{
					printf("   Nhap so nguyen n > 0: ");
					scanf("%d",&n);
				}while(n< 0);
				printf("   Cac so chia het cho 5 tu 0 --> %d la: ",n);
				lietKe(n);
				printf("\n---> Tong cac so chia het cho 5 la: %d",tong(n) );	
				
					
				printf("\n+---------------------------------------------+\n");
				printf("   Hoan thanh bai 2.Bam ENTER de tiep tuc...\n");
				getch();
				system("cls");
				break;
				
			
			
			case 3:
				sinhVien();
				

				
				printf("\n+---------------------------------------------+\n");
				printf("   Hoan thanh bai 3.Bam ENTER de tiep tuc...\n");
				getch();
				system("cls");
				break;
			case 0:	
				printf("   Goodbye!\n");
				return 0;
			default:
				system("cls");
				printf("   Hay chon dung menu.Bam ENTER de tiep tuc...\n");	
				getch();
				break;
		}
	
	}while(1);
	
	return 0;
}
