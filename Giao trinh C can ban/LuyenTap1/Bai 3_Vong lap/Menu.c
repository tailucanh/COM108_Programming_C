#include <stdio.h>
#include <math.h>


void bangMaASCII(){
	unsigned char thuTu;
	for(thuTu= 32; thuTu < 255; thuTu+=1){
		printf("    %3d - %c", thuTu, thuTu);
		if(thuTu % 6 ==0){
			printf("\n");
		}		
	}	
}

int tongBac3(int n){
	int  i, tong = 0;
	for(i = 1; i<= n; i++){
		tong = tong + i*i*i;
	}
	
	return tong;
}


int uocSoCuaN(int x){
	int i;
	for(i = 1; i <= x; i++){
		if(x % i == 0){
			 printf(" %d  ", i);	
		}
	}	
}


void tamGiacCan(){
	
	int h, i, j;
	printf("Nhap chieu cao tam giac: ");
	scanf("%d", &h);
	
	int m = h, n = h;
    for (i = 1; i <= h; i++){
      for (j = 1; j <= 2 * h - 1; j++){   
         if (j >= m && j <= n)
            printf("*");
         else
            printf(" ");
      }
      m--;
      n++;
      printf("\n");
   }
}


float tongNghichDao(int a){
	float i, tong = 0;
	for(i =1; i <= a; i++){
		tong += 1/i;
	}
	return tong;
}


int tongBinhPhuongSole(int y){
	int tong = 0, i;
	for(i = 1; i <= y; i++){
		if(i % 2 != 0){		
			tong+= i*i;
		}
	}
	return tong;
}


void soMax_MincuaN_soNguyen(){
	int a[100], i , max, min, n;
	
	printf("Nhap so phan tu N: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
     }
	
	max = a[1];	
	for(i = 1; i <= n; i++){
		if(a[i] > max){	
			max = a[i];	
		}
	}
	printf("So lon nhat tron day la: %d\n", max);
	
	min = a[1];
	for(i = 1; i<= n; i++){
		if(a[i]< min){
			min = a[i];		
		}
	}
	printf("So nho nhat trong day la: %d\n", min);

	
}


int giaiThua(int b){
	int i, ketQua = 1;
	for (i = 1; i<= b; i++){
		ketQua *= i;	
	}
	return ketQua;
}


void tamGiacRong(){
	int i, j, h;
	printf("Nhap chieu cao tam giac: ");
	scanf("%d", &h);
	int m = h, n = h;
	for (i = 1; i <= h; i++) {
      for (j = 1; j <= 2 * h - 1; j++){  
         if (j == m || j == n || i== h)
            printf("*");
         else
            printf(" ");
      }
      m--;
      n++;
      printf("\n");
   }
	
}


void hinhChuNhatRong(){
	int dong,cot,i, j;
	printf("Nhap chieu dai: ");
	scanf("%d", &dong);
	printf("Nhap chieu rong: ");
	scanf("%d", &cot);
	for (i = 1; i <= dong; i++){
      for ( j = 1; j <= cot; j++)
         if (i == 1 || j == 1 || i == dong || j == cot)
            printf("* ");
         else
            printf("  ");
      printf("\n");
   }


}


int soHangDayFibonaci(int c){
	int  a1 = 1, a2 = 1;
	int i, a;
	if(c == 1|| c == 2){
		return 1;
	}
	for(i = 3; i<=c; i++){
		a = a1 + a2;
		a1 = a2;
		a2 = a;
	}	
	return a;
}


void nhapSoInChu(){
	int so;
	printf("Nhap vao so tu 0 --> 9: ");
	scanf("%d", &so);
	
	switch(so){
		case 0:
			printf("---> KHONG\n");
			break;
		case 1:
			printf("---> MOT\n");
			break;
		case 2:
			printf("---> HAI\n");
			break;			
		case 3:
			printf("---> BA\n");
			break;
		case 4:
			printf("---> BON\n");
			break;		
		case 5:
			printf("---> NAM\n");
			break;
		case 6:
			printf("---> SAU\n");
			break;
		case 7:
			printf("---> BAY\n");
			break;
		case 8:
			printf("---> TAM\n");
			break;
		case 9:
			printf("---> CHIN\n");
			break;
		default:
			printf("Ban hay nhap dung tu 1-->9.\n");					
	}	
}


void tinhThuaSoNguyenTo(){
	int n;
	printf("Nhao so n > 1: ");
	scanf("%d", &n);
	
	if( n < 2){
		printf("Nhap n > 1.\n");
	}else{
		int i = 2;
		printf("%d = ", n);
		while(n > 1 ){
			if(n % i == 0){
				printf(" %d ", i);
				if(n != i){
					printf("x");			
				}
				n/=i;
			}else{
				i++;
			}
		}
		
	}	
}


void laCoNuocMi(){
	int i, j, m, n;
    	
   	printf("\n Nhap vao chieu ngang cua la co:");
   	scanf("%d", &m);
    printf("\n Nhap vao chieu doc cua la co:");
    scanf("%d", &n);
    	
    for(i=1; i<=n; i++)
    {
    	for(j=1; j<=m; j++)
    	{
    		if(i==1 || i==n || j==1 || j==m)
    			printf(" + ");
    		else if(i<=(n/2)+1 && j<=(m/2)+1)
    			printf(" * ");
    		else
    			printf("   ");
    	}
    	printf("\n");
	}
}


void tinhDanSo(){
	float tongDs;
	float dsTangthem;		
	
	dsTangthem = (6*0.018)*10;

	
	tongDs = 6 + dsTangthem;	
	printf("Tong dan so sau 10 nam la : %.2f trieu nguoi\n ", tongDs);
}


void tichBangTong(){
	int a,b,c;
	printf("  Tich 3 chu so bang tong 3 chu so gom: \n");
	for (a=1;a<=9;a++)
		for (b=0;b<=9;b++)
			for (c=0;c<=9;c++)
			
			
	if ((a*b*c)==(a+b+c))
		printf("\n \t %d%d%d\n",a,b,c);	
}


void dieuKien(){
	int a,b,c,d;
	printf("Cac so a,b,c,d thoa man dieu kien la: \n");
	for (a=0; a<=10; a++)
		for (b=0; b<=10; b++)
			for (c=0; c<=10; c++)
				for (d=0; d<=10; d++)
				
	if(a*d*d == b*c*c*c)
		printf("\n a = %d   b= %d   c = %d   d = %d\n", a,b,c,d);				
}


void timSoNguyenTo(){
	int n, i, j, count = 0;
	printf("Nhap so ket thuc cua chuoi N: ");
	scanf("%d", &n);
	if(n < 2){
		printf("Hay nhap n > 2.\n");
	}else{
		printf("Cac so nguyen to tu 2 --> %d la: ", n);
		for(i = 2; i<=n; i++){
			for(j = 1; j<=i; j++){
				if(i%j == 0)
					count++;
			}
			if(count == 2)
				printf("%d, ",i);
			count = 0;
		}
	}
}




int main(){
	int menu;
	do{
		printf("\t        <--------------CHO MENU---------------->\n");
		printf("=================================================================================\n");
		printf("= 1.Chuong trinh in ra bang ma ASCII.\n");
		printf("= 2.Chuong trinh tong bac 3 cua N so nguyen dau tien.\n");
		printf("= 3.Chuong trinh nhap vao so nguyen va in ra tat ca uoc so cua no.\n");
		printf("= 4.Ve tam giac can bang cac dau *.\n");
		printf("= 5.Chuong trinh tong nghich dao N so nguyen theo cong thuc: S = 1 + 1/2 + 1/3 + … + 1/N .\n");
		printf("= 6.Tinh tong binh phuong cac so le tu 1--->N.\n");
		printf("= 7.Chuong trinh nhap vao N so nguyen, in ra so lon nhat, so nho nhat.\n");
		printf("= 8.Chuong trinh nhap vao N roi tinh giai thua cua N.\n");
		printf("= 9.Chuong trinh ve tam giac can rong bang dau *.\n");
		printf("= 10.Chuong trinh ve hinh chu nhat rong bang dau *.\n");
		printf("= 11.Tinh so hang thu N cua day Fibonaci. \n");
		printf("= 12.Chuong trinh nhap vao tu 0-->9.In ra chu so tuong ung.\n");
		printf("= 13.Phan tich so nguyen N thanh tich cac thua so nguyen to.\n");
		printf("= 14.In la co nuoc Mi.\n");
		printf("= 15.Tinh dan so cua thanh pho sau 10 nam biet ( dan so hien tai = 6tr, ti le gia tang = 1,8%).\n");
		printf("= 16.Tim so nguyen gom ba chu so sao cho tich 3 chu so bang tong 3 chu so.\n");
		printf("= 17.Tim so nguyen a,b,c,d khac nhau trong khoang 0-->10 thoa man dk: a*d*d = b*c*c*c .\n");
		printf("= 18.Tim so nguyen to tu 2-->N voi N duoc nhap vao tu ban phim.\n");
		printf("===================================================================================\n");
	
		printf("Moi ban chon menu: ");
		fflush(stdin);
		scanf("%d", &menu);
		printf("-------------------------------------------------------------------------------------\n");
		
		
		switch(menu){
			case 1:		//Chuong trinh in ra bang ma ASCII.	
				printf("Bang ma ASCII tu 23-->255 la: \n");		
				bangMaASCII();
			
				printf("\n-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;
			
			int n;	
			case 2:		//Chuong trinh tong bac 3 cua N so nguyen dau tien.
				printf("Nhap so nguyen N:  ");
				scanf("%d", &n);
				printf("Tong bac 3 cua so %d so nguyen dau tien la: %d\n",n, tongBac3(n) );
			
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			int x;	
			case 3:		//Chuong trinh nhap vao so nguyen va in ra tat ca uoc so cua no.
				printf("Nhap so nguyen N: ");
				scanf("%d", &x);
				
				printf("Tat ca cac uoc so cua %d la: ", x);
				printf("      ", uocSoCuaN(x));
						
				printf("\n-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			case 4: 	//Ve tam giac can bang cac dau *.
				
				tamGiacCan();
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			int a;	
			case 5:		//Chuong trinh tong nghich dao N so nguyen theo cong thuc: S = 1 + 1/2 + 1/3 + … + 1/N .
				printf("Nhap so nguyen N: ");
				scanf("%d", &a);
				
				printf("Tong nghich dao tu 1 --> %d la: %.1f.\n", a, tongNghichDao(a));
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
			
			int y;	
			case 6:		//Tinh tong binh phuong cac so le tu 1--->N.
				printf("Nhap so nguyen N: ");
				scanf("%d", &y);
				
				printf("Tong binh phuong so le tu 1--> %d la: %d.\n", y, tongBinhPhuongSole(y));
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
				
		
			case 7:		//Chuong trinh nhap vao N so nguyen, in ra so lon nhat, so nhor nhat.				
				soMax_MincuaN_soNguyen();
					
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
							
			int b;	
			case 8:		//Chuong trinh nhap vao N roi tinh giai thua cua N.
				printf("Nhap so giai thua: ");
				scanf("%d", &b);
				
				printf("Ket qua cua %d! la: %d.\n",b,giaiThua(b));
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			case 9:		//Chuong trinh ve tam giac can rong bang dau *.
				tamGiacRong();
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
								
			case 10:	//Chuong trinh ve hinh chu nhat rong bang dau *.
				hinhChuNhatRong();
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			int c;	
			case 11:	//Tinh so hang thu N cua day Fibonaci.
				printf("Nhap thu hang trong day Fibonaci: ");
				scanf("%d", &c);
				
				printf("Thu hang %d trong Fibonaci la so : %d.\n", c, soHangDayFibonaci(c));
								
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			case 12:	//Chuong trinh nhap vao tu 0-->9.In ra chu so tuong ung.	
				nhapSoInChu();
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
					
			case 13:	//Phan tich so nguyen N thanh tich cac thua so nguyen to
				
				tinhThuaSoNguyenTo();
				
				printf("\n-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			case 14:	//In la co nuoc Mi.
				laCoNuocMi();
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			case 15:	//Tinh dan so cua thanh pho sau 10 nam biet ( dan so hien tai = 6tr, ti le gia tang = 1,8%).
				tinhDanSo();
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			case 16:	//Tim so nguyen gom ba cu so sao cho tich 3 chu so bang tong 3 chu so.
				tichBangTong();
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			case 17:	//Tim so nguyen a,b,c,d khac nhau trong khoang 0-->10 thoa man dk: a*d*d = b*c*c*c .

				dieuKien();
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			case 18:	//Tim so nguyen to tu 2-->N voi N duoc nhap vao tu ban phim.
				timSoNguyenTo();
				
				printf("\n-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			default:
				system("cls");
				printf("Ban da nhap sai mneu, bam ENTER de nhap lai...\n");
				getch();
				break;																		
		}

	}while(1);
	
	
	return 0;
	
}
