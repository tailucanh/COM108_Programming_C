#include <stdio.h>
#include <stdlib.h>
void thongTin(){
	printf ("++---------------------------------------++\n");
	printf ("----> Ho ten: Ha Thi Minh Trang      ----++\n");
	printf ("----> MSSV: PH26263                  ----++\n");
	printf ("----> Diem: 10                       ----++\n");
	printf ("++---------------------------------------++\n");
}

int tinhTong(int n){
	int tong =0, i;
	
	for ( i=1; i<=n; i++){
		tong += i;
	}	
	return tong;
}

int main(){
	int x;
	
	do{
		
		printf ("\n+----------------Menu-------------+\n");
		printf ("	1. Thong tin ca nhan\n");
		printf ("	2. Tinh tong tu 1 den N\n ");
		printf ("	3. Thong tin SV\n");
		printf ("	0. Thoat\n");
		
		printf ("\nMoi ban chon chuc nang: ");
		scanf ("%d", &x);
		
		switch (x){
			case 1 : 
				thongTin();
				getch();
				system("cls");
				break;
				
			int n;	
			case 2: 
				
				printf ("\nMoi nhap mot so nguyen duong bat ki: ");
				scanf ("%d", &n);
				
				if ( n % 2 == 0){
					printf ("\nSo ban vua nhap la so chan\n");
				}else{
					printf ("\nSo ban vua nhap la so le\n");
				}
				printf ("Tong tu 1 den %d la: %d",n,tinhTong(n) );
				
				getch();
				system("cls");
				break;
			
				
			int t;	
			int i,j;
			case 3:
				printf ("+--------Thong tin sinh vien--------+\n");
				
				do{
					printf ("Moi nhap so luong sinh vien: ");
					scanf ("%d", &t);
				}while( t<=0 );
				float diem[t];
			
				for ( i=0; i< t; i++){
					printf ("Moi nhap diem cua sv thu %d: ",i);
					scanf ("%f", &diem[i]);	
				}	
				printf ("\n+----Xuat thong tin sinh vien----+");
				printf ("\n	So luong sinh vien: %d", t);
				
				float tb, tong=0;
				for ( i=0; i< t; i++){		
					tong += diem[i];
					
				}			
				tb = tong / t;
				printf ("\n	Diem trung binh chung: %.2f", tb);
				
				// tim diem max
				float max = diem[0];
				for ( i=0; i<t; i++){
					if ( max < diem[i] ){
						max = diem[i];
					}	
				}
					printf ("\n	Diem lon nhat: %.2f", max);
					
				// sap xep
				for ( i=0; i<t; i++){
					for (j=i+1; j<t; j++){
						if ( diem[i] < diem[j] ){
							int temp = diem[i];
							diem[i] = diem[j];
							diem[j] = temp;
						}
					}
				}
				
				printf ("\n	Danh sach diem: ");
				
				for ( i=0; i<t; i++){
					printf (" %.2f\t", diem[i]);
				}
				
				getch();
				system("cls");
				break;
				
			case 0:
				return 0;
			defaulf:
				system("cls");
				printf(" Ban k chon dung menu. hay nhap lai.");
				getch();
				break;
						
		}
		
		
	}while( x!= 0 );
	
	return 0;
}
